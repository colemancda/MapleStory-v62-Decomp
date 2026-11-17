/* FUN_004d494d - 0x004d494d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_004d494d(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_14 [16];
  
  iVar1 = *(int *)(param_1 + 0x28);
  do {
    do {
      iVar2 = iVar1;
      if (iVar2 == 0) {
        return 0;
      }
      iVar1 = *(int *)(iVar2 + 4);
    } while (*(int *)(*(int *)(iVar2 + 0x10) + 0x80) == 0);
    FUN_0046f2de(local_14);
    iVar3 = (*DAT_0097b57c)(local_14,*param_2,param_2[1]);
  } while (iVar3 == 0);
  return *(undefined4 *)(iVar2 + 0x10);
}


