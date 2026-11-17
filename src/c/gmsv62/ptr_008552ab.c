/* ptr_008552ab - 0x008552ab in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_008552ab(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int unaff_EBX;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  uVar1 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  iVar2 = FUN_0042459a();
  if (iVar2 == *(int *)(unaff_EBX + 0x2088)) {
    uVar1 = FUN_00679d22(unaff_EBP + -0xe4,0x16a);
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    FUN_00414f8b(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0xe4) != 0) {
      FUN_00434e38(*(int *)(unaff_EBP + -0xe4) + -0xc);
    }
    FUN_00471102(unaff_EBP + 8,0xc);
    FUN_0060142b(0x72,0,0);
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    FUN_00457cda(0);
    FUN_004751b2(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_0045ebca();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + 8) != 0) {
      FUN_00434e38(*(int *)(unaff_EBP + 8) + -0xc);
    }
    iVar2 = *(int *)(unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    if (*(int *)(unaff_EBP + -0x10) == *(int *)(unaff_EBX + 0x2cac)) {
      FUN_004b659a(unaff_ESI);
      piVar3 = (int *)FUN_0047cf98(0xffffffff);
      *piVar3 = iVar2;
      puVar4 = (undefined4 *)FUN_0085877c(0xffffffff);
      puVar5 = (undefined4 *)(unaff_EBP + -0x11c);
      for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar4 = puVar4 + 1;
      }
      *(undefined1 *)puVar4 = *(undefined1 *)puVar5;
      FUN_00414edd(unaff_EBP + -0x11c,0xffffffff);
      puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x5c,0x16b);
      uVar1 = *puVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      FUN_00434e21(unaff_EBP + 8,uVar1,*(undefined4 *)(unaff_EBP + -0x14));
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + -0x5c) != 0) {
        FUN_00434e38(*(int *)(unaff_EBP + -0x5c) + -0xc);
      }
      FUN_00471102(unaff_EBP + 8,0xc);
      if ((DAT_0097bef4 != 0) && (*(int *)(DAT_0097bef4 + 0x588) == 2)) {
        FUN_0077e45e();
      }
      if (DAT_00978358 != 0) {
        FUN_007b02be();
      }
      if ((DAT_0097bef4 != 0) && (*(int *)(DAT_0097bef4 + 0x588) == 3)) {
        FUN_0077e45e();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
      goto LAB_008565d9;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + 8) != 0) {
      FUN_00434e38(*(int *)(unaff_EBP + 8) + -0xc);
    }
    iVar2 = *(int *)(unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  if (iVar2 != 0) {
    FUN_00434e38(iVar2 + -0xc);
  }
LAB_008565d9:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


