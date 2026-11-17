/* FUN_007762ec - 0x007762ec in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007762ec(void)

{
  int iVar1;
  int extraout_ECX;
  int iVar2;
  int *piVar3;
  int unaff_EBP;
  undefined4 *puVar4;
  undefined1 auStack_4c [4];
  undefined4 uStack_48;
  int iStack_44;
  undefined1 *puStack_40;
  undefined4 *puStack_3c;
  
  FUN_00879bb8();
  iVar2 = *(int *)(*(int *)(extraout_ECX + 0x24) + 0x818);
  *(int *)(unaff_EBP + -0x24) = extraout_ECX;
  if ((iVar2 != 0) && (iVar2 != *(int *)(DAT_00978368 + 0x2088))) {
    puStack_3c = (undefined4 *)0xffffffff;
    puStack_40 = &DAT_00978474;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    iStack_44 = 0x776336;
    FUN_00414edd();
    iVar1 = DAT_00978368;
    iVar2 = *(int *)(DAT_00978368 + 0x2cf8);
    *(int *)(unaff_EBP + -0x28) = DAT_00978368;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + -4);
    }
    *(int *)(unaff_EBP + -0x1c) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if (0 < iVar2) {
      puVar4 = *(undefined4 **)(iVar1 + 0x2cf8);
      piVar3 = puVar4 + 3;
      do {
        iVar2 = 0;
        while( true ) {
          if (*piVar3 == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = *(int *)(*piVar3 + -4);
          }
          if (iVar1 <= iVar2) break;
          if (*(int *)(*piVar3 + iVar2 * 4) ==
              *(int *)(*(int *)(*(int *)(unaff_EBP + -0x24) + 0x24) + 0x818)) goto LAB_00776395;
          iVar2 = iVar2 + 1;
        }
        iVar2 = -1;
LAB_00776395:
        if (-1 < iVar2) {
          puStack_3c = puVar4 + 1;
          puStack_40 = (undefined1 *)0x7763b8;
          FUN_00414f8b();
          *(undefined4 *)(unaff_EBP + -0x20) = *puVar4;
          break;
        }
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
        puVar4 = (undefined4 *)((int)puVar4 + 0x2a);
        piVar3 = (int *)((int)piVar3 + 0x2a);
      } while (*(int *)(unaff_EBP + -0x14) < *(int *)(unaff_EBP + -0x1c));
    }
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    puStack_3c = (undefined4 *)0x1123;
    puStack_40 = (undefined1 *)(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_44 = 0x7763d7;
    puVar4 = (undefined4 *)FUN_00679d22();
    puStack_3c = *(undefined4 **)(unaff_EBP + -0x10);
    puStack_40 = (undefined1 *)*puVar4;
    iStack_44 = unaff_EBP + -0x18;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_48 = 0x7763ea;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    puStack_3c = (undefined4 *)0x7763f9;
    FUN_00414ebb();
    puStack_3c = (undefined4 *)0x0;
    puStack_40 = (undefined1 *)0x0;
    iStack_44 = 0;
    uStack_48 = 0;
    *(undefined1 **)(unaff_EBP + -0x24) = auStack_4c;
    FUN_00450368(unaff_EBP + -0x18);
    iVar2 = FUN_007db791();
    if (iVar2 == 6) {
      puStack_3c = (undefined4 *)0x0;
      puStack_40 = (undefined1 *)0x0;
      iStack_44 = 0x83;
      uStack_48 = 0x776428;
      FUN_0060142b();
      puStack_3c = (undefined4 *)0x6;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      puStack_40 = (undefined1 *)0x776436;
      FUN_00457cda();
      puStack_3c = *(undefined4 **)(unaff_EBP + -0x20);
      puStack_40 = (undefined1 *)0x776441;
      FUN_00457d37();
      puStack_3c = *(undefined4 **)(*(int *)(unaff_EBP + -0x28) + 0x2cd2);
      puStack_40 = (undefined1 *)0x776452;
      FUN_00457d37();
      puStack_3c = (undefined4 *)(unaff_EBP + -0x38);
      puStack_40 = (undefined1 *)0x776461;
      FUN_004751b2();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      puStack_3c = (undefined4 *)0x77646d;
      FUN_0045ebca();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_3c = (undefined4 *)0x776478;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    puStack_3c = (undefined4 *)0x776484;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


