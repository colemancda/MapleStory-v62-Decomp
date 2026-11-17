/* FUN_006cc4f7 - 0x006cc4f7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006cc4f7(void)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  int aiStack_34 [4];
  undefined1 *puStack_24;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) == 1) {
    if (*(int *)(extraout_ECX + 0xa8) < 0) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      puStack_24 = (undefined1 *)(unaff_EBP + -0x18);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      aiStack_34[3] = 0x6cc538;
      puStack_24 = (undefined1 *)FUN_0045b90e();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      aiStack_34[3] = 0x6cc545;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      puStack_24 = (undefined1 *)0x6cc550;
      FUN_00414ebb();
      puStack_24 = (undefined1 *)0x0;
      aiStack_34[3] = 0;
      aiStack_34[2] = 0x6cc55a;
      FUN_0045ed72();
      aiStack_34[3] = 0x6cc561;
      FUN_0045ee27();
      aiStack_34[3] = unaff_EBP + -0x10;
      puStack_24 = (undefined1 *)0x0;
      aiStack_34[2] = 0x6cc56b;
      iVar2 = FUN_007d1e11();
      puVar1 = puStack_24;
      if (iVar2 != 0) {
LAB_006cc5a5:
        if (*(int *)(DAT_00978368 + 0x2098) == 0) {
          puStack_24 = (undefined1 *)0x0;
        }
        else {
          puStack_24 = (undefined1 *)(*(int *)(DAT_00978368 + 0x2098) + 4);
        }
        if (puStack_24 == (undefined1 *)0x0) {
          puStack_24 = (undefined1 *)DAT_00980dfc;
        }
        aiStack_34[3] = DAT_00980dfc;
        if (*(int *)(unaff_EBP + -0x10) != 0) {
          aiStack_34[3] = *(int *)(unaff_EBP + -0x10);
        }
        aiStack_34[2] = 0x6cc5d6;
        iVar2 = FUN_008858f0();
        puVar1 = puStack_24;
        if (iVar2 == 0) {
          puStack_24 = (undefined1 *)0x0;
          aiStack_34[3] = 0;
          aiStack_34[2] = 0;
          aiStack_34[1] = 0;
          aiStack_34[0] = (int)puVar1;
          *(int **)(unaff_EBP + -0x1c) = aiStack_34;
          FUN_00679d22(aiStack_34,0xb42);
          iVar2 = FUN_007db3ad();
          if (iVar2 != 0) goto LAB_006cc599;
        }
        puStack_24 = *(undefined1 **)(unaff_EBP + -0x10);
        aiStack_34[3] = 0x6cc60d;
        FUN_004a2fef();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_006cc753:
        puStack_24 = (undefined1 *)0x6cc758;
        FUN_00414ebb();
        goto LAB_006cc758;
      }
      puStack_24 = (undefined1 *)0x0;
      aiStack_34[3] = 0;
      aiStack_34[2] = 0;
      aiStack_34[1] = 0;
      aiStack_34[0] = (int)puVar1;
      *(int **)(unaff_EBP + -0x1c) = aiStack_34;
      FUN_00679d22(aiStack_34,0x314);
      iVar2 = FUN_007db3ad();
      if (iVar2 == 0) goto LAB_006cc5a5;
LAB_006cc599:
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
    else {
      if ((int)((-(uint)(*(int *)(extraout_ECX + 0xe8) != 0) & 5) + 5) <=
          *(int *)(extraout_ECX + 0xa8)) goto LAB_006cc776;
      puStack_24 = (undefined1 *)0x6cc636;
      FUN_00429303();
      puStack_24 = (undefined1 *)0x6cc641;
      iVar3 = FUN_004f162d();
      iVar2 = *(int *)(extraout_ECX + 0xa8);
      if (*(int *)(extraout_ECX + 0xb0 + iVar2 * 4) == iVar3) {
        puStack_24 = (undefined1 *)0x0;
        aiStack_34[3] = 0;
        aiStack_34[2] = 0;
        aiStack_34[1] = 0;
        *(int **)(unaff_EBP + -0x10) = aiStack_34;
        aiStack_34[0] = iVar2;
        FUN_00679d22(aiStack_34,0xb46);
        iVar2 = FUN_007db3ad();
        if (iVar2 != 0) goto LAB_006cc776;
      }
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      puStack_24 = (undefined1 *)0x6c7;
      aiStack_34[3] = unaff_EBP + -0x10;
      *(undefined4 *)(unaff_EBP + -4) = 2;
      aiStack_34[2] = 0x6cc696;
      puVar4 = (undefined4 *)FUN_00679d22();
      puStack_24 = (undefined1 *)*puVar4;
      aiStack_34[3] = *(undefined4 *)(extraout_ECX + 0xb0 + *(int *)(extraout_ECX + 0xa8) * 4);
      aiStack_34[2] = unaff_EBP + -0x18;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      aiStack_34[1] = 0x6cc6b8;
      FUN_00550c58();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      puStack_24 = (undefined1 *)0x6cc6c4;
      FUN_00414ebb();
      puStack_24 = (undefined1 *)0xb4a;
      aiStack_34[3] = unaff_EBP + -0x1c;
      aiStack_34[2] = 0x6cc6d4;
      puVar4 = (undefined4 *)FUN_00679d22();
      puStack_24 = *(undefined1 **)(unaff_EBP + -0x18);
      aiStack_34[3] = *puVar4;
      aiStack_34[2] = unaff_EBP + -0x14;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      aiStack_34[1] = 0x6cc6e7;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      puStack_24 = (undefined1 *)0x6cc6f6;
      FUN_00414ebb();
      puStack_24 = (undefined1 *)0x0;
      aiStack_34[3] = 0;
      aiStack_34[2] = 0;
      aiStack_34[1] = 0;
      *(int **)(unaff_EBP + -0x20) = aiStack_34;
      aiStack_34[0] = extraout_ECX_00;
      FUN_00450368(unaff_EBP + -0x14);
      iVar2 = FUN_007db791();
      if (iVar2 == 6) {
        puStack_24 = &DAT_00978474;
        aiStack_34[3] = 0x6cc740;
        FUN_004a2fef();
        *(undefined1 *)(unaff_EBP + -4) = 2;
        puStack_24 = (undefined1 *)0x6cc74c;
        FUN_00414ebb();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        goto LAB_006cc753;
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      puStack_24 = (undefined1 *)0x6cc722;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
    puStack_24 = (undefined1 *)0x6cc72e;
    FUN_00414ebb();
  }
  else {
LAB_006cc758:
    if (*(int *)(extraout_ECX + 0x68) == 0) {
      *(undefined4 *)(extraout_ECX + 100) = *(undefined4 *)(unaff_EBP + 8);
      *(undefined4 *)(extraout_ECX + 0x68) = 1;
      if (*(int *)(extraout_ECX + 0x14) != 0) {
        puStack_24 = (undefined1 *)0x6cc776;
        FUN_00815de9();
      }
    }
  }
LAB_006cc776:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


