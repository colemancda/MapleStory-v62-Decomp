/* FUN_004ae949 - 0x004ae949 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_004ae949(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_18 [16];
  int local_8;
  
  uVar1 = param_2;
  if (*(int *)(param_1 + 0x34) == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  param_2 = 0;
  local_8 = 0;
  do {
    iVar2 = *(int *)(param_1 + 0x58);
    if ((iVar2 == 0) || (*(uint *)(iVar2 + -4) <= param_2)) goto LAB_004ae9df;
    piVar3 = (int *)(iVar2 + local_8);
    if (*piVar3 != -3) {
      (*DAT_0097b504)(local_18,piVar3[2],piVar3[3],piVar3[4] + piVar3[2],piVar3[5] + piVar3[3]);
      (*DAT_0097b588)(local_18,((-1 < *piVar3) - 1 & 0xfffffffd) + 4,1);
      iVar2 = (*DAT_0097b57c)(local_18,uVar1,param_3);
      if (iVar2 != 0) {
        *(uint *)(param_1 + 0x44) = param_2;
LAB_004ae9df:
        FUN_004b3daf();
        return 0;
      }
    }
    param_2 = param_2 + 1;
    local_8 = local_8 + 0x18;
  } while( true );
}


