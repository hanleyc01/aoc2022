test: main.kk test.txt 
	koka -e main.kk -- test.txt

test2: main.kk test1.txt
	koka -e main.kk -- test1.txt

test3: main.kk test2.txt
	koka -e main.kk -- test2.txt

test4: main.kk test3.txt
	koka -e main.kk -- test3.txt

data: main.kk data.txt
	koka -e main.kk -- data.txt

