
pipeline {
    agent any
    stages {
        stage('Checkout') {
            steps {
                checkout scm
            }
        }
        stage('Compile') {
            steps {
	echo 'compile app..'
	sh 'mbed compile --source . --source /var/lib/jenkins/mbed_dir/mbed-os/ --profile=debug -t GCC_ARM -m NUCLEO_F746ZG'
            }
        }
        stage('Test') {
            steps {
		echo 'Testing the app..'
            }
        }
        stage('Analyse') {
            steps {
		echo 'Analyse app..'
                sh label: '', returnStatus: true, script: 'cppcheck . --enable=all --inconclusive --xml --language=c++ --xml-version=2 2> cppcheck-result.xml'
                publishCppcheck allowNoReport: true, ignoreBlankFiles: true, pattern: 'cppcheck-result.xml'
            }
        }
    }
}
