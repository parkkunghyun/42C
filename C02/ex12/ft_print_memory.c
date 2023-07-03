// 메모리 지역을 보여주는 함수를 만들자
// 스페이스에 의해 메모리 지역을 구분하라
// 사이즈가 0이면아무것도 출력 안한다!
// 출력가능하지 않으면 . 표시!

// 리틀엔디안 방식?
// 낮은 주소에 데이터의 낮은 바이트부터 저장!
// 우리가 숫자를 사용하는 선형방식과는 거꾸로 읽어야함!
// 0x12345678을 저장하면 => 0x78, 0x56, 0x34, 0x12가 됨!
// 리틀엔디안은 현재 위치부터 처음으로 가면서 읽기 때문에 더 빠름!!

// 빅엔디안은 다시 처음 위치로 돌아간 뒤 읽어야해서 조금 더 느리다!
// 소켓으로 네트워크 통신을 주고 받을때 빅엔디안이 디폴트이지만 상대가 리틀 엔디안이면 맞춰줘야함!

/*
000000100003f59: 426f 6e6a 6f75 7220 6c65 7320 616d 696e Bonjour les amin
000000100003f69: 6368 6573 090a 0963 2020 6573 7420 666f ches...c  est fo
000000100003f79: 752e 746f 7574 2e63 6520 7175 206f 6e20 u.tout.ce qu on 
000000100003f89: 7065 7574 2066 6169 7265 2061 7665 632e peut faire avec.
000000100003f99: 2e2e 7072 696e 745f 6d65 6d6f 7279 2e2e ..print_memory..
000000100003fa9: 2e2e 6c6f 6c2e 6c6f 6c2e 2000 0000 0001 ..lol.lol. .....
*/

// 


#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>