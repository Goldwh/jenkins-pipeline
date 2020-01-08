pipeline{
    agent any
    stages{
        stage('Code PULL'){
        steps{
            if (env.BRANCH_NAME == 'master' || env.BRANCH_NAME == 'dev') {
                echo 'Code PULL'
            } else {
                echo 'Current branch skip'
            }
        }
    }
        stage('Code BUILD'){
        steps{
            if (env.BRANCH_NAME == 'master' || env.BRANCH_NAME == 'dev') {
                echo 'Code BUILD'
                sh 'make clean && make'
            } else {
                echo 'Current branch skip'
            }
        }
    }
        stage('Unit TEST'){
        steps{
            if (env.BRANCH_NAME == 'master' || env.BRANCH_NAME == 'dev') {
                echo 'Unit TEST'
                sh './c_jenkins_test'
            } else {
                echo 'Current branch skip'
            }
        }
    }
        stage('Package'){
        steps{
            if (env.BRANCH_NAME == 'master') {
                echo 'Package'
            } else {
                echo 'Current branch skip'
            }
        }
    }
        stage('Deploy TEST ENV'){
        steps{
            if (env.BRANCH_NAME == 'master') {
                echo 'Deploy TEST ENV'
            } else {
                echo 'Current branch skip'
            }
        }
    }
        stage('Auto API TEST'){
        steps{
            if (env.BRANCH_NAME == 'master') {
                echo 'Auto API TEST'
            } else {
                echo 'Current branch skip'
            }
        }
    }
    }
    post{
    success{
        emailext(
            subject: '${ENV, var="JOB_NAME"}-第${BUILD_NUMBER}次构建日志',
            body: '${FILE,path="email.html"}',
            to: "794918503@qq.com",
        )
    }
    failure{
        emailext(
            subject: '${ENV, var="JOB_NAME"}-第${BUILD_NUMBER}次构建日志',
            body: '${FILE,path="email.html"}',
            to: "794918503@qq.com",
        )
    }
    }
}
