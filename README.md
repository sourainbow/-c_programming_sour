# c_programming_sour
FOR SOUR'S C PROGRAMMING CLASS

## 为什么要用GitHub?
很简单，因为我们需要远程交流代码，而GitHub是最流行的免费代码社区，而且是很多开源软件的大本营，所有人都可以对公开的代码进行修改，并提交自己的修改，再由代码管理者进行采纳，以此集思广益，代码不断完善，开源软件的精髓就在于此。

当然，我们并不是软件开发者，至少现在不是，那我们就把它当作一个类似博客的地方。当你有问题时，把你的代码（或者是别的文件）传到这个仓库（下面会解释）里，我看完之后修改再传上去，这样可以省去很多时间，也更有效。

## 你需要知道的GitHub的基本属性
GitHub是全球最大的~~同性交友网站~~代码托管网站，里面有很多~~基佬~~大佬，它是如此专业以至于可以用来作为应聘时的能力证明。

作为初级使用者，你只需要知道你在申请一个免费账户之后，可以建立自己的仓库（repository，缩写repo，你可以简单认为是一个线上文件夹）,然后把本地（你自己的电脑叫做本地，你的GitHub账户叫做远程）的代码上传到远程仓库，或者把别人仓库里的代码（只要是公开的）下载到你的仓库或者本地。

我已经为我们注册好了一个[新的GitHub账号](https://github.com/sourainbow)，登录账号密码在给你的邮件里，点开之后你会发现我已经创建了一个新的仓库“c_progamming_sour”,你会发现这份README也在仓库里，因为我也是用我即将介绍的方法上传和修改它的。


## 怎么上传自己的代码
好了，现在让我们开始介绍一下如何上传自己的代码，这需要用到一个工具——Git。
### Git——一个神奇的工具
首先，如果你做过课程论文或者ppt等，你可能会经常修改你的工作，为了可以查看之前的工作，你可能每修改一次都另存为一个新文件，然后你的电脑里会出现类似于“论文”、“论文修改版”、“论文最终版”、“论文打死也不改了版”等一系列名字。或者你比较聪明，会在名字后加数字，但这看上去还是有些臃肿冗余，而且当你想找回某次修改时，还要一个一个文件比对。你需要更明了有效的方法，归结起来，这是一个版本控制的问题，你的每次修改会形成一个新版本，如果我们能通过某种方式记录下这些版本的不同并方便地倒退回或前进到某个版本，我们就能轻松地驾驭这些相似的文件，而Git就是为此而生的工具。
#### 版本库
#### 安装Git
[下载地址](https://pan.baidu.com/s/1kU5OCOB?errno=0&errmsg=Auth%20Login%20Sucess&&bduss=&ssnerror=0&traceid=#list/path=%2Fpub%2Fgit)
你的电脑应该是64位的，所以下载第二个就可以了，第一个pdf是一份操作列表清单，你可以把它放到桌面上，如果你忘了某个操作，可以打开查一下，它是英文的，不要紧，下面我会一一解释到。下载完成默认安装就好。

在使用Git之前，你还需要明确什么是命令行窗口，按下windows+R键，输入"cmd"，回车弹出的窗口就是命令行窗口，通常输入一行命令然后回车执行，你在编写C命令行程序时也遇到过它，它将是以后我们进行操作的主要环境。好了，现在在开始菜单里找到Git->Git Bash，就会弹出一个类似的窗口。然后输入
```bash
git config --global user.name "XXX"
```
其中`XXX`是你的用户名，可以随便起（如果你刚才不小心回车了也不要紧，重新输入这个命令把名字改过来就行），然后回车再输入
```bash
git config --global user.email "sourainbow@163.com"
```
直接用我们的邮箱就可以，这样就把你的的用户名和邮箱设置好了。
### 建立本地仓库
前面讲到可以在GitHub建立远程仓库，与之对应的，也可以在本地建立仓库，如果你不需要把代码传到远程，只在本地使用Git进行版本控制也是完全可以的。现在，在电脑里合适的位置新建一个文件夹作为仓库，例如在D盘新建“c_programming”文件夹“，再在里面新建“hellogit”文件夹，打开Git Bash（在这一章讲完之前，你可以一直开着它），然后输入
```bash
cd D:\c_programming\hellogit
```
这样就跳转到相应文件夹了，然后让我们把这个文件夹变成Git本地仓库，通过`git init`命令：
```bash
git init
```
好了，这下就有本地仓库了，如果你的电脑能显示隐藏文件夹的话，你会发现hellogit文件夹里多了一个“.git”文件夹，这就对了，当然如果不显示隐藏文件夹，也不要紧，因为这并不影响什么。这一步只需要执行一次，因为如果你不删除的话，仓库就会一直在那。

### 添加文件到仓库
现在仓库里还是空的，让我们试着往里面加点东西，在hellogit文件夹（注意，只有在这个文件夹里的文件，包括子文件夹才能被git识别，因为别的文件夹并没有建立仓库）里新建一个hellogit.c文件，里面可以写一个最简单的c程序，例如
```c
#include <stdio.h>
int main(){
    printf("Hello Git!");
    return 0;
}
```
新建的步骤和你之前在VC6.0操作的一样，只是你要找到那个c文件复制粘贴到hellogit文件夹里（如果你找不到它在哪来问我，不过你应该可以在"C:\Program Files(x86)\Microsoft Visual Studio\My project"里面找到你新建的所有文件），然后在Git Bash输入（以后除非特殊说明默认在Git Bash输入命令）
```bash
git add hellogit.c
```
回车没有任何输出，这就是正确的反应，因为“没有消息就是好消息”。然后输入
```bash
git commit -m "wrote a hellogit c file"
```
`-m`后面的内容是改动说明，根据你改动的内容来写，建议简明清楚，以后便于查找。回车，会显示
```bash
1 file changed, 5 insertions(+)
```
意思是改动了一个文件，加入了五行内容（hellogit.c有五行代码），这样就完成了对本地仓库的提交。`git add`和`git commit`在以后是最常用的操作，至于为什么要分成两步，是考虑到可能你可能改动了多个文件，但只提交一次，这样就可以在commit里统一说明就好了。具体

### 查看文件修改状态
好了，我们来修改一下hellogit.c文件，打开它，把它改成
```bash
#include <stdio.h>
int main(){
    printf("Hello Git! I love you!");
    return 0;
}
```
只是加了一句话。现在输入
```bash
git status
```
回车会显示（其中两行）
```bash
#Changes not staged for commit:
#    modified:   hellogit.c
```
意思是hellogit.c被修改了，但还没提交。现在可以用`git diff`来查看修改的内容
```bash
git diff hellogit.c
```
你会看到前后两个版本的不同之处的对比。现在就可以放心地提交了，试着按照之前的两步提交，注意修改一下改动说明，例如“add love”，我想你一定能做到的。提交完后用`git status`检查一下工作区状态，会显示
```bash
nothing to commit (working directory clean)
```
意思是工作区干净，没有需要提交的修改，我们的第一次修改提交就大功告成啦。需要提醒的是，查看状态和比较版本都不是必须的操作，只是你忘了修改哪些内容或忘了是否提交时一个辅助的命令，你可以随时执行这两条命令，这样说能明白吧。
### 版本历史记录
我们用`git log`命令查看所有修改历史记录：
```bash
git log
```
输出的内容类似于
```bash
commit 3628164fb26d48395383f8f31179f24e0882e1e0
Author: sourainbow <sourainbow@163.com>
Date:   Mon April 2 15:11:49 2018 +0800

    add love
  
commit cb926e7ea50ad11b8f9e909c05226233bf755030
Author: sourainbow <sourainbow@163.com>
Date:   Mon April 2 14:11:49 2018 +0800

    wrote a hellogit c file
```
可以看见，你的两次修改都明确地显示出来了，`commit`后面一串数字是Git设定的版本号，它唯一确定你的每一次修改，或许以后你以后会用到，现在先不用管它。
如果我们想回退到之前的版本怎么办呢，试着输入
```bash
git reset --hard HEAD^
```
`HEAD`是当前版本，`HEAD^`是上个版本，`HEAD^^`是上上个版本，`HEAD~N`是上第N个版本。现在打开hellogit.c看看那句"I love you"还在不在？不在了？那就对了，说明你回退成功了。如果你反悔了想回到修改后的版本，或者，更一般地，想回到任意一个修改提交过的版本，请输入
```bash
git reflog
```
会显示你所有的修改和版本重置命令，类似于
```bash
cb926e7 HEAD@{0}: reset: moving to HEAD^
ea34578 HEAD@{1}: commit: add love
cb926e7 HEAD@{2}: commit (initial): wrote a hellogit c file
```
每一行开始的几位代码就是版本号缩写，你的版本号肯定和我不一样，然后你就可以根据这个号码找回你的任意一次修改，例如输入
```bash 
git reset --hard ea34578
```
回车就回到"add love"后的状态了，是不是很简单？到此你对于用Git进行本地版本控制已经了解了大概了，虽然还有一些内容，例如撤销修改，删除文件操作以及工作区暂存区的概念，现在不知道也不打紧。现在休息一下，告诉我你的学习成果吧～
## 怎么上传到远程仓库
### ssh密钥生成
好了，说了这么多，终于再回到我们的GitHub，sourainbow是我们的GitHub账户，登录进去，现在有一个我上传的c_programming_sour仓库，下面我们试着把本地的hellogit仓库上传到GitHub上，首先，先要进行一下密钥验证，否则任何人都可以向我们的账户上传了。打开Git Bash，输入
```bash
ssh -keygen -t rsa -C "sourainbow@163.com"
```
然后一直回车直到命令执行结束，然后在“C:\Users\Administor\ .ssh”文件夹里你会发现id_rsa和id_rsa.pub两个文件，它们分别是你的私钥和公钥，打开id_rsa.pub，复制里面的内容，然后打开GitHub账户设置（点开头像里的Settings）里SSH and GPG Keys页面，里面已经有了我的密钥，点击New SSH key,在Key栏粘贴，在Title取一个名字，点击Add SHH key，就完成了密钥的匹配。
![add_new_ssh.png](https://raw.githubusercontent.com/sourainbow/c_programming_sour/master/add_new_ssh.png)
### 建立远程仓库
好了，现在还需要做一步准备，就是在GitHub上建立一个仓库来接收我们的上传，点击账户主页面右上角加号图标，选择New Repository![new_github_repo.png](https://raw.githubusercontent.com/sourainbow/c_programming_sour/master/new_github_repo.png)
在Repository name里填hellogit，其他设置不用改动，点击Creat Repository按钮，就建立成功了。接下来，就是把本地仓库的内容上传到远程仓库啦，回到本地的仓库目录，输入
```bash
git remote add origin git@github.com:sourainbow/hellogit.git
```
回车，如果没异常反应的话，本地和远程仓库就关联好了，`origin`是默认的远程库的名字。
### 上传文件
下一步就是把内容上传上去，继续输入
```bash
git push -u origin master
```
`push`操作就是上传，或者说“推送”更合适，`-u`是第一次推送需要加的，之后再推送只需要用
```bash
git push origin master
```
就行了。如果出现以下输出
```bash
The authenticity of host 'github.com (xx.xx.xx.xx)' can't be established.
RSA key fingerprint is xx.xx.xx.xx.xx.
Are you sure you want to continue connecting (yes/no)?
```
是要你确定SSH密钥连接，输入yes回车就好了，以后就不会出现这个提示了。`master`是主分支名，关于分支的内容以后再介绍，现在只需要知道我们已经把本地仓库里的所有内容推送到远程了就行了，不信？刷新下GitHub页面，打开hellogit仓库，有没有发现hellogit.c文件？太棒了，真是神奇的工具～
## 怎么下载远程代码
怎么上传讲完了，接下来说下怎么下载，例如我之前在远程仓库建立的c\_programming\_sour仓库，里面有我上传的root\_finding.c文件，怎么下载到你的电脑上呢，很简单：克隆～,假如你想克隆到在D盘的c_programming文件夹里，输入
```bash
cd D:\c_programming
```
跳转到目录下，然后输入
 ```bash 
 git clone git@github.com:sourainbow/c_programming_sour.git
 ```
 发现了么，格式和远程推送类似，只是操作是`clone`，操作对象换成了`c_programming_sour`仓库，回车，会出现
 ```bash
 Cloning into 'c_programming_sour'...
remote: Counting objects: 4, done.
remote: Total 4 (delta 0), reused 0 (delta 0)
Receiving objects: 100% (4/4), done.
```
然后你就发现电脑里多了一个c\_programming\_sour文件夹，里面有README.md和root\_finding.c两个文件，这就完成了远程仓库的克隆，并且克隆到本地的仓库已经初始化了Git和进行了远程连接，所以不必再进行`init`和`remoter add`操作了，很方便，也就是说，你再想把你的作业推送上去的时候，直接进行`add`、`commit`和`push`操作就好了，试一下吧～
## 小结
其实Git最精华的部分在于分支，例如一个团队开发一个项目，每个人都在自己的本地库上赶进度，然后推送到远程仓库，但是如果大家都七手八脚地推送，项目就乱套了，所以Git有一个主分支master,它是最权威的版本，然后每个人可以创建自己的分支，做完自己的工作之后，推送到远程分支上，经过master管理者（也就是项目负责人）审核后融合到主分支上，这样协作工作才能各司其职而井井有条。但是现在，你先将之前的基本操作学会，之后看你的学习情况随缘加深内容吧，祝酸酸同学学习愉快～