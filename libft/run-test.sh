# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    run-test.sh                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuseiikeda <yuseiikeda@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/06 10:51:12 by susami            #+#    #+#              #
#    Updated: 2022/04/30 12:53:22 by yuseiikeda       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

git_clone_if_none()
{
	if [ ! -d $LOCALREPO ]
	then
		git clone $REPOSRC $LOCALREPO
	fi
}

INITIAL_DIR=$(pwd)
cd $INITIAL_DIR
echo $(pwd)
echo "Tests by 'libftTester'"
REPOSRC=https://github.com/Tripouille/libftTester.git
LOCALREPO=libftTester
git_clone_if_none
cd $LOCALREPO
make
cd $INITIAL_DIR
echo $(pwd)
echo "Tests by 'Usami'sTester'"
REPOSRC=https://github.com/usatie/libft-tester-tokyo
LOCALREPO=usaTester
git_clone_if_none
cd $LOCALREPO
make
cd $INITIAL_DIR
make fclean
