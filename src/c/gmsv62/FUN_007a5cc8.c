/* FUN_007a5cc8 - 0x007a5cc8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007a5cc8(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = FUN_007d1e08();
  if ((*(int *)(param_1 + 0x1e94) != 0) &&
     (*(int *)(param_1 + 0x1ea4) == iVar1 || *(int *)(param_1 + 0x1ea4) - iVar1 < 0)) {
    uVar3 = -(uint)(*(int *)(param_1 + 0xd74) != 0) & *(int *)(param_1 + 0xd74) - 0xcU;
    iVar4 = uVar3 + 0xc;
    iVar2 = (**(code **)(*(int *)(uVar3 + 0xc) + 0x40))
                      (iVar4,*(undefined4 *)(param_1 + 0x1e9c),*(undefined4 *)(param_1 + 0x1ea0));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,iVar4,&DAT_00963d08);
    }
    *(undefined4 *)(param_1 + 0x1e94) = 0;
    *(undefined4 *)(param_1 + 0xd60) = *(undefined4 *)(param_1 + 0x1e9c);
    *(undefined4 *)(param_1 + 0xd64) = *(undefined4 *)(param_1 + 0x1ea0);
    *(undefined4 *)(param_1 + 0xd58) = *(undefined4 *)(param_1 + 0x1e9c);
    *(int *)(param_1 + 0x1ea4) = iVar1;
    *(undefined4 *)(param_1 + 0xd5c) = *(undefined4 *)(param_1 + 0x1ea0);
    *(int *)(param_1 + 0x1ea8) = iVar1 + 600;
  }
  return;
}


