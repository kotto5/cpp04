all:
	$(MAKE) -C ex00
	$(MAKE) -C ex01
	$(MAKE) -C ex02
	$(MAKE) -C ex03

clean:
	$(MAKE) clean -C ex00
	$(MAKE) clean -C ex01
	$(MAKE) clean -C ex02
	$(MAKE) clean -C ex03