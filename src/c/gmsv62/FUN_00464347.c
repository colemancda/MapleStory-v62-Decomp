/* FUN_00464347 - 0x00464347 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00464347(void)

{
  uint uVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  uint uStack_20;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x18) = 0;
  uStack_20 = 0x464366;
  iVar2 = FUN_0042459a();
  uStack_20 = unaff_EBP + -0xd;
  *(int *)(unaff_EBP + -0x18) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  uStack_28 = 0x46437b;
  iStack_24 = iVar2;
  FUN_004658da();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (0 < iVar2) {
    uStack_20 = iVar2 << 3;
    iStack_24 = *(undefined4 *)(unaff_EBP + -0x14);
    uStack_28 = 0x464393;
    FUN_004245d2();
    iVar2 = 0;
    if (0 < *(int *)(unaff_EBP + -0x18)) {
      *(int *)(unaff_EBP + -0x1c) = extraout_ECX + 0x940;
      *(int *)(unaff_EBP + 8) = extraout_ECX + 0xea8;
      do {
        uVar1 = *(uint *)(*(int *)(unaff_EBP + -0x14) + iVar2 * 8);
        uStack_20 = *(int *)(*(int *)(unaff_EBP + -0x14) + iVar2 * 8 + 4) / 1000000 + -1;
        iStack_24 = 0x4643d3;
        FUN_004b2699();
        uStack_20 = 0;
        iStack_24 = 0x4643dc;
        FUN_008161f1();
        uStack_20 = 0;
        iStack_24 = 0x4643e5;
        FUN_008161f1();
        iStack_24 = 0x4643ee;
        uStack_20 = uVar1 >> 0x10;
        FUN_0048b3d1();
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(unaff_EBP + -0x18));
    }
  }
  uStack_20 = 0;
  iStack_24 = 0;
  uStack_28 = 0;
  uStack_2c = 0x4d5;
  iStack_30 = unaff_EBP + 8;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_2c = 0x464417;
  uStack_2c = FUN_00411641();
  *(int **)(unaff_EBP + -0x1c) = &iStack_30;
  FUN_00679d22(&iStack_30,0x21e);
  FUN_007db3ad();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  uStack_20 = 0x46443e;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_20 = 0x46444a;
  FUN_004658b8();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


