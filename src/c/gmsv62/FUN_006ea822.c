/* FUN_006ea822 - 0x006ea822 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_006ea822(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_18 [16];
  undefined4 local_8;
  
  iVar2 = 0;
  local_8 = 0;
  piVar3 = (int *)(param_1 + 0xad0);
  do {
    (*DAT_0097b504)(local_18,piVar3[-2] + 0x28,piVar3[-1] + 0x19,*piVar3 + 0x28,piVar3[1] + 0x19);
    iVar1 = (*DAT_0097b57c)(local_18,param_3,param_4);
    if (iVar1 != 0) {
      FUN_006ea71c(param_2,*(undefined4 *)(*(int *)(param_1 + 0xa74) + 0x34),
                   *(undefined4 *)(param_1 + 0x578),iVar2);
      return param_2;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 4;
  } while (iVar2 < 0x19);
  *(undefined4 *)(param_2 + 4) = 0;
  return param_2;
}


