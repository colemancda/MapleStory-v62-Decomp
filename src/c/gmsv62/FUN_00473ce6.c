/* FUN_00473ce6 - 0x00473ce6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00473ce6(int param_1,int param_2)

{
  SOCKET SVar1;
  int iVar2;
  
  FUN_00475946();
  if (*(SOCKET *)(param_1 + 8) != 0xffffffff) {
    closesocket(*(SOCKET *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  SVar1 = socket(2,1,0);
  *(SOCKET *)(param_1 + 8) = SVar1;
  if (SVar1 != 0xffffffff) {
    iVar2 = (*DAT_0097b704)();
    *(int *)(param_1 + 0x38) = iVar2 + 5000;
    iVar2 = (*DAT_0097b724)(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 4),0x401,0x33);
    if (((iVar2 != -1) &&
        (iVar2 = (*DAT_0097b744)(*(undefined4 *)(param_1 + 8),param_2,0x10), iVar2 == -1)) &&
       (iVar2 = (*DAT_0097b738)(), iVar2 == 0x2733)) {
      return;
    }
    FUN_00473da9(0);
    return;
  }
  param_2 = WSAGetLastError();
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&param_2,&DAT_008f9b80);
}


