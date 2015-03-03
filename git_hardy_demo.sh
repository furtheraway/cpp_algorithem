    1  sudo gedit  /etc/grub.d/40_custom 
    2  sudo gedit  /boot/grub/grub.cfg
    3  cd /boot/efi/
    4  ls EFI/Microsoft/Boot/bootmgfw.efi 
    5  ls -l  EFI/Microsoft/Boot/bootmgfw.efi 
    6  grub-probe --target=fs_uuid $esp/EFI/Microsoft/Boot/bootmgfw.efi
    7  grub-probe --target=fs_uuid /boot/efi/EFI/Microsoft/Boot/bootmgfw.efi 
    8  grub-probe --target=fs_uuid /boot/efi/EFI/Microsoft/Boot/bootmgr.efi 
    9  grub-probe --target=fs_uuid $esp/EFI/Microsoft/Boot/bootmgfw.efi
   10  sudo apt-get install boot-repair
   11  sudo apt-get update
   12  sudo apt-get install boot-repair
   13  sudo apt-get install refind
   14  sudo apt-get search refind
   15  sudo apt-get 
   16  sudo apt-get install refind-efi
   17  sudo apt-get install rEFind
   18  df /boot/efi
   19  passwd john 
   20  sudo apt-get update
   21  sudo apt-get install -y boot-repair && boot-repair
   22  sudo gedit /boot/grub/grub.cfg
   23  sudo agt-get help
   24  sudo apt-get help
   25  sudo apt-get check boot-repaire
   26  sudo apt-get check boot-repair
   27  sudo apt-get install boot-repair
   28  sudo update-grub
   29  sudo grub-mkconfig -o /boot/grub/grub.cfg 
   30  gedit /boot/grub/grub.cfg
   31  cd /boot/efi/EFI/Boot/
   32  ls
   33  sudo apt-get install gvim
   34  sudo apt-get install gvim-gtk
   35  sudo apt-get install vim-gtk
   36  sudo apt-get install subl3
   37  sudo apt-get install vim-gtk
   38  sudo apt-get install vim
   39  vim /boot/grub/grub.cfg
   40  vim /etc/grub.d/25_custom
   41  sudovim /etc/grub.d/25_custom
   42  sudo vim /etc/grub.d/25_custom
   43  sudo update-grub
   44  gedit /boot/grub/grub.cfg
   45  cd 
   46  sudo apt-get remove os-prober
   47  sudo rm /etc/grub.d/30_os-prober 
   48  lspci | grep -i broadcom
   49  sudo apt-get install --reinstall bcmwl-kernel-source
   50  cd /boot/efi/EFI/Microsoft/Boot/
   51  ls
   52  ls -l
   53  cd /etc/grub.d/
   54  ls
   55  sudo gedit 25_custom 
   56  sudo apt-get install fglrx  fglrx-amdcccle
   57  sudo aticonfig  --initial
   58  sudo amdconfig --initial
   59  cd /etc/X11/
   60  ls
   61  cat xorg.conf
   62  cat xorg.conf.BAK 
   63  sudo reboot
   64  sudo apt-get install fglrx-updates  fglrx-amdcccle-updates
   65  sudo aticonfig  --initial
   66  sudo reboot
   67  sudo amdconfig --initial
   68  sudo aticonfig --initial
   69  sudo amdconfig --initial
   70  cat /etc/X11/xorg.conf.fglrx-0
   71  cat /etc/X11/xorg.conf.fglrx-1
   72  history
   73  history > Due_boot_install_command_history_Chengjian.txt
   74  ls
   75  exit
   76  history
   77  exit
   78  ls
   79  history
   80  sudo apt-get update 
   81  ssh
   82  ssh john@129.49.50.251
   83  exit
   84  lyx
   85  sudo apt-get install lyx
   86  ssh john@129.49.50.251
   87  exit
   88  java
   89  sudo apt-get install openjdk-7-jdk 
   90  ls
   91  cd Downloads/
   92  ls
   93  ssh john@129.49.50.251
   94  exit
   95  cd Downloads/
   96  ls
   97  scp
   98  scp john@129.49.50.251:/home/john/Downloads/Matlab_R2012a_UNIX -r .
   99  scp -r john@129.49.50.251:/home/john/Downloads/Matlab_R2012a_UNIX .
  100  ls
  101  cd Matlab_R2012a_UNIX/
  102  du -sh
  103  ls
  104  exit
  105  pwd
  106  ls
  107  mkdir tmp
  108  ls
  109  cd Downloads/Matlab_R2012a_UNIX/crack/
  110  ls
  111  vi install.txt 
  112  exit
  113  eixt
  114  cd /usr/local/MATLAB/R2012a/bin/
  115  ls
  116  ./matlab 
  117  sudo ./matlab 
  118  ./matlab 
  119  cd Downloads/Matlab_R2012a_UNIX/
  120  ls
  121  vi installer_input.txt 
  122  ls
  123  vi installer_input.txt 
  124  sudo install -inputFile installer_input.txt 
  125  vi installer_input.txt 
  126  sudo install -inputFile <installer_input.txt> 
  127  sudo install
  128  ls
  129  sudo ./install -inputFile installer_input.txt 
  130  password
  131  history
  132  :q
  133  passwd john
  134  exit
  135  q
  136  exit
  137  ls
  138  /dev
  139  cd /dev
  140  ls
  141  ls sd*
  142  exit
  143  ls
  144  cd /dev
  145  ls sda*
  146  ls sda* -tl
  147  lshw -c storage -c disk
  148  mkdir ~/win8
  149  mount /dev/sda5 /home/john/win8
  150  sudo mount /dev/sda5 /home/john/win8
  151  cd 
  152  cd win8/
  153  ls
  154  cd Dropbox/
  155  ls
  156  exit
  157  unmont win8
  158  umont win8
  159  umount win8
  160  mount
  161  ls -al /dev/disk/by-uuid/
  162  udisks
  163  udisks --mount /dev/disk/by-uuid/2ECC6675CC66376D
  164  ls
  165  cd
  166  ln 
  167  ln --help
  168  ln -s /media/Windows8_OS/Dropbox /home/john/Dropbox/
  169  ls
  170  cd Dropbox/
  171  ls
  172  cd Dropbox
  173  ls
  174  pwd
  175  cd ..
  176  ls
  177  rm *
  178  rm * -r
  179  ls
  180  cd ..
  181  ls
  182  ln -s /media/Windows8_OS/Dropbox /home/john/
  183  rm Dropbox/ -r
  184  ls
  185  ln -s /media/Windows8_OS/Dropbox /home/john/
  186  ls
  187  cd Dropbox
  188  ls
  189  echo good? > foo
  190  ls
  191  pw
  192  dpwd
  193  pwd
  194  cd ..
  195  ls
  196  cd Dropbox
  197  ls Dropbox
  198  ls
  199  cd Dropbox
  200  ls
  201  vi foo 
  202  exit
  203  ls
  204  cd /media/
  205  ls
  206  cd
  207  vi .bashrc 
  208  exit
  209  udisks --mount /dev/disk/by-uuid/2ECC6675CC66376D
  210  cd Dropbox
  211  ls
  212  exit
  213  vi .bashrc
  214  exit
  215  cd Dropbox
  216  ls
  217  cd jabref/
  218  ls
  219  java -jar JabRef-2.9.2.jar 
  220  cd Dropbox
  221  ls
  222  cd Dropbox
  223  ls
  224  cd Dropbox/AMS_534/
  225  ls
  226  matlab
  227  /usr/local/MATLAB/R2012a/bin/matlab
  228  exit
  229  udisks --mount /dev/disk/by-uuid/2ECC6675CC66376D
  230  ls
  231  cd Dropbox
  232  ls
  233  cd AMS_534/
  234  ls
  235  /usr/local/MATLAB/R2012a/bin/matlab
  236  ls
  237  udisks --mount /dev/disk/by-uuid/2ECC6675CC66376D
  238  cd Dropbox/AMS_534/
  239  ls
  240  /usr/local/MATLAB/R2012a/bin/matlab
  241  cd Dropbox/0_matlab_scripts/tasks/
  242  grep movie */*.m
  243  exit
  244  cd Downloads/RuleBender-2.0.382-lin64/
  245  ls
  246  ./RuleBender 
  247  exit
  248  ls
  249  cd Dropbox/0_matlab_scripts/tasks/
  250  grep movie */*.m
  251  grep pause */*.m
  252  ls
  253  exit
  254  udisks --mount /dev/disk/by-uuid/2ECC6675CC66376D
  255  cd Dropbox/AMS_534/
  256  ls
  257  /usr/local/MATLAB/R2012a/bin/matlab
  258  exit
  259  udisks --mount /dev/disk/by-uuid/2ECC6675CC66376D
  260  cd win8/
  261  ls
  262  cd ..
  263  cd /media/Windows8_OS/
  264  ls
  265  cd Users
  266  ls
  267  cd john/
  268  ls
  269  cd ..
  270  ls
  271  cd ../
  272  ls
  273  mkdir OBDII
  274  cd OBDII/
  275  ls
  276  scp -r john@129.49.50.251:/media/john/disk/ .
  277  scp -r john@129.49.50.144:/media/john/disk/ .
  278  exit
  279  ssh john@129.49.50.251
  280  ssh john@129.49.50.144
  281  exit
  282  ssh
  283  ssh john@129.49.50.144
  284  exit
  285  gksudo gedit /etc/default/grub 
  286  sudo update-grub
  287  alsamixer
  288  amixer sset Master umute
  289  exit
  290  sudo apt-get install python-matplotlib python-scipy                      python-pandas python-sympy python-nose
  291  exit
  292  python
  293  exit
  294  udisks --mount /dev/disk/by-uuid/2ECC6675CC66376D
  295  exit
  296  udisks --mount /dev/disk/by-uuid/2ECC6675CC66376D
  297  exit
  298  BNG2.pl
  299  bionetgen
  300  exit
  301  cd Dropbox/AMS_534/
  302  ls
  303  exit
  304  cd Downloads/
  305  ls
  306  cd RuleBender-
  307  cd RuleBender-2.0.382-lin64/
  308  ls
  309  ./RuleBender 
  310  exit
  311  cd Downloads/RuleBender-workspace/
  312  ls
  313  ./RuleBender 
  314  /home/john/Downloads/RuleBender-2.0.382-lin64/RuleBender 
  315  exit
  316  top
  317  exit
  318  udisks --mount /dev/disk/by-uuid/2ECC6675CC66376D
  319  exit
  320  sudo apt-get install ipython-notebook
  321  ipython notebook
  322  udisks --mount /dev/disk/by-uuid/2ECC6675CC66376D
  323  cd Dropbox
  324  ls
  325  mkdir python
  326  ls
  327  cd python/
  328  ls
  329  ipython notebook
  330  exit
  331  ipython notebook
  332  ipython notebook 
  333  bg
  334  wget http://bender.astro.sunysb.edu/classes/python-science/lectures/python-functions.ipynb
  335  gpointing-device-settings
  336  sudo apt-get install gpointing-device-settings
  337  gpointing-device-settings
  338  gsettings set org.gnome.settings-daemon.peripherals.mouse middle-button-enabled true
  339  udisks --mount /dev/disk/by-uuid/2ECC6675CC66376D
  340  cd Dropbox
  341  sl
  342  ls
  343  rm foo 
  344  udisks --mount /dev/disk/by-uuid/2ECC6675CC66376D
  345  cd Dropbox
  346  ls
  347  cd AMS_534/
  348  ls
  349  cd odefunc/
  350  ls
  351  cd ..
  352  mkdir logistic
  353  ls
  354  cd logistic/
  355  ls
  356  /usr/local/MATLAB/R2012a/bin/matlab
  357  exit
  358  cd Dropbox/AMS_534/Linear_alg_and_regression/
  359  /usr/local/MATLAB/R2012a/bin/matlab
  360  exit
  361  cd Dropbox
  362  cd AMS_534/
  363  ls
  364  cd logistic/
  365  ls
  366  cd ..
  367  ls
  368  mv logistic/ logistic_growth
  369  cd logistic_growth/
  370  ls
  371  /usr/local/MATLAB/R2012a/bin/matlab
  372  sudo apt-get install xfonts-100dpi xfonts-75dpi
  373  exit
  374  cd Downloads/RuleBender-workspace/
  375  ls
  376  grep exclude */*.bngl
  377  ls *
  378  cd Dropbox/AMS_534/logistic_growth/
  379  /usr/local/MATLAB/R2012a/bin/matlab
  380  ls
  381  cd Downloads/
  382  ls
  383  cd RuleBender-2.0.382-lin64/
  384  ls
  385  ./RuleBender 
  386  cd Downloads/
  387  cd RuleBender-2.0.382-lin64/
  388  ./RuleBender 
  389  cd Downloads/RuleBender-workspace/ab_dimer/results/homodimer/2014-03-04_11-10-05/
  390  ls
  391  /usr/local/MATLAB/R2012a/bin/matlab
  392  cd Dropbox/AMS_534/population_genetics/
  393  ls
  394  /usr/local/MATLAB/R2012a/bin/matlab
  395  ls
  396  cd Downloads/RuleBender-2.0.382-lin64/
  397  ls
  398  ./RuleBender 
  399  ls
  400  cd Dropbox/AMS_534/
  401  ls
  402  cd population_genetics/
  403  ls
  404  matlab
  405  /usr/local/MATLAB/R2012a/bin/matlab
  406  exit
  407  cd Downloads/RuleBender-workspace/
  408  ../RuleBender-2.0.382-lin64/RuleBender 
  409  exit
  410  cd Downloads/RuleBender-workspace/
  411  ../RuleBender-2.0.382-lin64/RuleBender 
  412  exit
  413  cd Downloads/RuleBender-workspace/
  414  ../RuleBender-2.0.382-lin64/RuleBender 
  415  exit
  416  cd Dropbox/
  417  ls
  418  cd 0_matlab_scripts/
  419  /usr/local/MATLAB/R2012a/bin/matlab
  420  exit
  421  cd Dropbox/AMS_534/
  422  ls
  423  cd rule_based_model_bngl/
  424  ls
  425  /usr/local/MATLAB/R2012a/bin/matlab
  426  cd Downloads/RuleBender-workspace/
  427  ../RuleBender-2.0.382-lin64/RuleBender 
  428  eix
  429  texit
  430  exit
  431  cd Dropbox/AMS_534/
  432  ls
  433  cd rule_based_model_bngl/
  434  ls
  435  /usr/local/MATLAB/R2012a/bin/matlab
  436  exit
  437  cd Downloads/RuleBender-workspace/ab_dimer/results/AB_teramer_ring/2014-03-13_00-42-04/
  438  ls
  439  head AB_teramer_ring.gdat -n 1 > final.txt
  440  tail AB_teramer_ring.gdat -n 1 >> final.txt
  441  exit
  442  ls
  443  cd Dropbox/AMS_534/population_genetics/
  444  ls
  445  /usr/local/MATLAB/R2012a/bin/matlab
  446  udisks --mount /dev/disk/by-uuid/2ECC6675CC66376D
  447  cd Dropbox
  448  sl
  449  ls
  450  cd AMS_534/
  451  ls
  452  matlab
  453  /usr/local/MATLAB/R2012a/bin/matlab
  454  cd ..
  455  cd 0_matlab_scripts/tasks/pair_evl/
  456  ls
  457  vmd
  458  vi /home/john/.bashrc 
  459  source  /home/john/.bashrc 
  460  echo $PATH 
  461  mvd
  462  vmd
  463  udisks --mount /dev/disk/by-uuid/2ECC6675CC66376D
  464  cd Dropbox
  465  ls
  466  cd Manuscript/
  467  ls
  468  cd dimers/
  469  ls
  470  nautilus .
  471  cd Dropbox/0_matlab_scripts/tasks/pair_evl/
  472  ls
  473  cd 1cop/
  474  vmd
  475  cd Dropbox/0_matlab_scripts/tasks/pair_evl/
  476  ls
  477  vmd
  478  ssh -X lch@lonestar.tacc.utexas.edu
  479  exit
  480  cd Dropbox/0_matlab_scripts/tasks/pair_evl/3ssi/
  481  scp lch@lonestar.tacc.utexas.edu:/scratch/02037/lch/all/path/3ssi/3ssi.4.42.7.46.xtc .
  482  scp lch@lonestar.tacc.utexas.edu:/scratch/02037/lch/all/path/3ssi/3ssi.4.42.7.56.xtc .
  483  scp lch@lonestar.tacc.utexas.edu:/scratch/02037/lch/all/path/3ssi/3ssi.8.21.7*.xtc .
  484  rm 3ssi.8.21.7.66.xtc 
  485  rm 3ssi.8.21.7.xtc 
  486  vmd
  487  exit
  488  cd Dropbox/0_matlab_scripts/tasks/pair_evl/
  489  ls
  490  vmd
  491  exit
  492  ls
  493  cd Dropbox/Manuscript/dimers/
  494  lyx
  495  exit
  496  ls
  497  udisks --mount /dev/disk/by-uuid/2ECC6675CC66376D
  498  cd Dropbox/0_matlab_scripts/tasks/pair_evl/
  499  ls
  500  cut Q3.pair_evl.3ssi.txt -c 4 
  501  cut Q3.pair_evl.3ssi.txt -d ' ' -f4 
  502  awk '{print $4}' Q3.pair_evl.3ssi.txt 
  503  awk '{print $5}' Q3.pair_evl.3ssi.txt 
  504  awk '{print $29}' Q3.pair_evl.3ssi.txt 
  505  awk '{print $30}' Q3.pair_evl.3ssi.txt 
  506  awk '{print $31}' Q3.pair_evl.3ssi.txt 
  507  awk '{print $32}' Q3.pair_evl.3ssi.txt 
  508  awk '{print $33}' Q3.pair_evl.3ssi.txt 
  509  awk '{print $34}' Q3.pair_evl.3ssi.txt 
  510  awk '{print $35}' Q3.pair_evl.3ssi.txt 
  511  awk '{print $69}' Q3.pair_evl.3ssi.txt 
  512  awk '{print $36}' Q3.pair_evl.3ssi.txt 
  513  awk '{print $37}' Q3.pair_evl.3ssi.txt 
  514  awk '{print $10}' Q3.pair_evl.3ssi.txt 
  515  awk '{print $4}' Q3.pair_evl.3ssi.txt 
  516  awk '{print $4}' Q3.pair_evl.1lmb.txt 
  517  awk '{print $4}' Q3.pair_evl.1f36.txt 
  518  awk '{print $4}' Q3.pair_evl.1cop.txt 
  519  exit
  520  ssh -X lch@lonestar.tacc.utexas.edu
  521  cd Dropbox/0_matlab_scripts/tasks/pair_evl/
  522  ls
  523  cd 1cop/
  524  scp lch@lonestar.tacc.utexas.edu:/scratch/02037/lch/all/path/1cop/1cop.6.93.18.xtc .
  525  scp lch@lonestar.tacc.utexas.edu:/scratch/02037/lch/all/path_10000/1cop/1cop.0.??.??.xtc .
  526  cd Dropbox/0_matlab_scripts/tasks/pair_evl/
  527  ls
  528  cd 1cop/
  529  ls
  530  vmd
  531  ls
  532  sudo apt-get install R-base
  533  sudo apt-get install r-base
  534  ;s
  535  ls
  536  ll
  537  cd Dropbox/AMS_534/
  538  ls
  539  cd ..
  540  ls
  541  cd A
  542  cd AMS_534/
  543  ls
  544  R
  545  ls
  546  nautilus .
  547  exit
  548  cd Dropbox/AMS_534/
  549  ls
  550  cd population_genetics/
  551  ls
  552  matlab
  553  /usr/local/MATLAB/R2012a/bin/matlab
  554  exit
  555  sudo apt-get update
  556  sudo apt-get upgrade
  557  exit
  558  udisks --mount /dev/disk/by-uuid/2ECC6675CC66376D
  559  cd Dropbox
  560  ls
  561  exit
  562  udisks --mount /dev/disk/by-uuid/2ECC6675CC66376D
  563  eixt
  564  exit
  565  sudo apt-get install git
  566* git clone git://git.gromacs.org/gromacs.git Downloads/
  567  ls
  568  cd gromacs/
  569  git remote add origin git@github.com:farawayyy/gromacs.git
  570  git remote add github git@github.com:farawayyy/gromacs.git
  571  git config -e
  572  git push -u github master
  573  ssh-keygen 
  574  ls ~/.ssh
  575  ls yes
  576  ssh-keygen 
  577  rm yes
  578  rm yes.pub 
  579  vim /home/john/.ssh/id_rsa.pub 
  580  git push -u github master
  581  git branch
  582  git push -u github masterls
  583  ls
  584  gedit 
  585  gedit .
  586  nautilus .
  587  git log
  588  git status
  589  cd ..
  590  git status
  591  cd gromacs/
  592  git status
  593  git add CMakeLists.txt
  594  git status
  595  git commit -m "ballshit sjfalsdjflas"
  596  git log
  597  git config --global user.name "furtheraway"
  598  git config --global user.email "yuanyao.or.john@gmail.com"
  599  vim .ssh/config
  600  vim .git/config 
  601  git resest HARD HEA~1
  602  git reset HARD HEA~1
  603  git reset --HARD HEA~1
  604* 
  605  git log
  606  ls
  607  git status
  608  git log
  609  git status
  610  git checkout .
  611  git status
  612  git log
  613  git checkout .
  614  git status
  615  git checkout COPYING
  616  git status
  617  git add CMakeLists.txt
  618  git commit 
  619  git log
  620  git push origin master
  621  git push   github master
  622  ls
  623  history
  624  history > record.txt
  625  git log
  626  git checkout 5f59569a8dedd94aa7adfd62acc773384fa592b0
  627  git branch
  628  git checkout 8259e7afae405f8bd65468e79cec7f4f96a9a429 
  629  git branch
  630  git checkout master
  631  cd cd..
  632  ls
  633  cd ..
  634  ls
  635  udisks --mount /dev/disk/by-uuid/2ECC6675CC66376D
  636  cd Dropbox
  637  ls
  638  cd eclipse/
  639  ls
  640  cd ..
  641  ls
  642  cd CPP/
  643  ls
  644  cd test/
  645  ls
  646  git init
  647  ls
  648  git log
  649  git add --all
  650  git commit -m "init commit "
  651  git log
  652  git remote add origin git@github.com:furtheraway/practices.git
  653  git push origin master
  654  cd ..
  655  ls
  656  history > record1.txt
