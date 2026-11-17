/* FUN_007b2391 - 0x007b2391 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007b2391(void)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBP;
  int *local_24;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  local_24 = (int *)(unaff_EBP + -0x18);
  FUN_0045cdbc();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  local_24 = (int *)0x7b23c0;
  uVar3 = FUN_00424561();
  *(uint *)(unaff_EBP + -0x1c) = uVar3 & 0xffff;
  local_24 = (int *)0x7b23cd;
  uVar2 = FUN_00424561();
  local_24 = (int *)0x7b23df;
  cVar1 = FUN_0042452b();
  *(undefined4 *)(unaff_EBP + 8) = 0;
  if (cVar1 == '\0') {
    local_24 = (int *)0x7b23f5;
    uVar4 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 8) = uVar4;
    local_24 = (int *)0x7b23ff;
    iVar5 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    local_24 = (int *)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  else {
    local_24 = (int *)0x7b2476;
    iVar5 = FUN_0043f545();
    iVar5 = -0xf - iVar5;
    local_24 = (int *)(extraout_ECX + 0xd24);
  }
  local_24 = (int *)*local_24;
  *(int ***)(unaff_EBP + -0x20) = &local_24;
  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 4))(local_24);
  }
  FUN_007b2483(unaff_EBP + -0x18,*(undefined4 *)(unaff_EBP + -0x1c),(uint)uVar2 * 1000,
               *(undefined4 *)(unaff_EBP + 8),iVar5);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (((*(byte *)(unaff_EBP + -0x10) & 1) != 0) &&
     (local_24 = *(int **)(unaff_EBP + -0x14), local_24 != (int *)0x0)) {
    (**(code **)(*local_24 + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_24 = (int *)0x7b245d;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


