/* FUN_008234af - 0x008234af in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008234af(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int unaff_EBP;
  undefined1 *puStack_40c;
  undefined4 uStack_408;
  int iStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined *puStack_3f8;
  int iStack_3f4;
  
  FUN_00879bb8();
  DAT_0097c27c = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffc10;
  iStack_3f4 = 0x8234d2;
  iStack_3f4 = FUN_008282ba();
  if (iStack_3f4 != 0) {
    puStack_3f8 = &DAT_0097b7f4;
    uStack_3fc = 0x8234e3;
    FUN_0087b200();
  }
  iStack_3f4 = 0x3a3;
  puStack_3f8 = (undefined *)(unaff_EBP + 8);
  _DAT_0097b900 = 0;
  _DAT_0097b90c = FUN_00828343;
  _DAT_0097b904 = 1;
  _DAT_0097b908 = 1;
  uStack_3fc = 0x823519;
  puVar1 = (undefined4 *)FUN_00679d22();
  iStack_3f4 = *puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_3f8 = (undefined *)0x1;
  uStack_3fc = 0;
  uStack_400 = 0x823526;
  uVar2 = (*DAT_0097b3e0)();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  uStack_400 = 0x823535;
  FUN_00414ebb();
  if (*(int *)(unaff_EBP + -0x18) == 0) goto LAB_00823c3d;
  uStack_400 = 0x823544;
  iVar3 = (*DAT_0097b49c)();
  if (iVar3 == 0xb7) {
    uStack_400 = 0x490;
    iStack_404 = unaff_EBP + -0x14;
    uStack_408 = 0x82355f;
    puVar1 = (undefined4 *)FUN_00679d22();
    *(undefined4 *)(unaff_EBP + 8) = *puVar1;
    uStack_400 = 0x48f;
    iStack_404 = unaff_EBP + -0x1c;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    uStack_408 = 0x823577;
    piVar4 = (int *)FUN_00679d22();
    uStack_400 = *(undefined4 *)(unaff_EBP + 8);
    iStack_404 = *piVar4;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_408 = 0x823587;
    uVar2 = (*DAT_0097b61c)();
    *(undefined4 *)(unaff_EBP + 8) = uVar2;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uStack_408 = 0x823596;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uStack_408 = 0x8235a2;
    FUN_00414ebb();
    if (*(int *)(unaff_EBP + 8) != 0) {
      uStack_408 = 1;
      puStack_40c = *(undefined1 **)(unaff_EBP + 8);
      (*DAT_0097b534)();
      (*DAT_0097b618)(*(undefined4 *)(unaff_EBP + 8));
      goto LAB_00823c3d;
    }
    uStack_408 = 5000;
    puStack_40c = *(undefined1 **)(unaff_EBP + -0x18);
    iVar3 = (*DAT_0097b3e4)();
    if (iVar3 == 0x102) goto LAB_00823c3d;
  }
  uStack_400 = 0x8235dd;
  FUN_00823381();
  uStack_400 = 0;
  iStack_404 = 0x8235e4;
  iVar3 = (*DAT_0097b664)();
  if (-1 < iVar3) {
    *(undefined4 *)(unaff_EBP + -4) = 5;
    uVar2 = FUN_0082365d();
    return uVar2;
  }
  iStack_404 = 0x8235ed;
  uVar2 = FUN_007d8205();
  *(int **)(unaff_EBP + 0x10) = &iStack_404;
  uStack_408 = 0xffffffff;
  puStack_40c = &DAT_00978474;
  *(undefined4 *)(unaff_EBP + 8) = uVar2;
  iStack_404 = 0;
  FUN_00414edd();
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_408;
  puStack_40c = (undefined1 *)0xffffffff;
  *(undefined4 *)(unaff_EBP + -4) = 3;
  FUN_0045f0f3(&DAT_00978474);
  *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_40c;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00679d22(&puStack_40c,0x9c9);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_005e7131();
LAB_00823c3d:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


