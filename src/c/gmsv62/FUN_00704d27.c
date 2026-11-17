/* FUN_00704d27 - 0x00704d27 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00704d27(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  iVar1 = param_2;
  param_2 = 0;
  for (uVar3 = 0; (param_1[0x188] != 0 && (uVar3 < *(uint *)(param_1[0x188] + -4)));
      uVar3 = uVar3 + 1) {
    iVar2 = (*DAT_0097b57c)(param_2 + param_1[0x188],iVar1,param_3);
    if (iVar2 != 0) {
      pcVar4 = *(char **)(param_1[0x187] + uVar3 * 4);
      if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
        iVar2 = FUN_006defab(param_1[0x15d] + uVar3 * 4,0);
        if (iVar2 == 0) {
          return 0;
        }
        pcVar4 = s_Register_0096b48c;
      }
      iVar2 = (**(code **)(*param_1 + 0x30))(pcVar4);
      param_3 = iVar2 + 0x14 + param_3;
      iVar2 = (**(code **)(*param_1 + 0x2c))(param_3);
      FUN_0074d755(iVar2 + 0x14 + iVar1,param_3,pcVar4);
      return 0;
    }
    param_2 = param_2 + 0x10;
  }
  FUN_0074d6fb();
  return 0;
}


