/* FUN_007ae574 - 0x007ae574 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007ae574(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = DAT_00978368;
  cVar2 = FUN_0042452b();
  if (cVar2 != '\0') {
    *(undefined4 *)(iVar1 + 0x208c) = 0;
    uVar3 = FUN_007d1e08();
    *(undefined4 *)(iVar1 + 0x2090) = uVar3;
  }
  iVar1 = DAT_00979264;
  uVar4 = FUN_0042452b();
  iVar1 = *(int *)(*(int *)(iVar1 + 4) + 4 + (uVar4 & 0xff) * 8);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xd58) = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(param_1 + 0xd5c) = *(undefined4 *)(iVar1 + 0x10);
    FUN_007acde7(0,0,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 0x18),1);
  }
  return;
}


