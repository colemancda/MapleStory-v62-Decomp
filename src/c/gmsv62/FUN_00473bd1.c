/* FUN_00473bd1 - 0x00473bd1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_00473bd1(int param_1,char *param_2,int param_3)

{
  ulong uVar1;
  hostent *phVar2;
  
  FUN_00473902(param_3,0);
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    uVar1 = inet_addr(param_2);
    *(ulong *)(param_1 + 4) = uVar1;
    if (uVar1 == 0xffffffff) {
      phVar2 = gethostbyname(param_2);
      if (phVar2 == (hostent *)0x0) {
        param_3 = WSAGetLastError();
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(&param_3,&DAT_008f9b80);
      }
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)*phVar2->h_addr_list;
    }
  }
  return param_1;
}


