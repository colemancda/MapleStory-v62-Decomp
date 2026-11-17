/* FUN_004ea9b7 - 0x004ea9b7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004ea9b7(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  int aiStack_3c [5];
  
  FUN_00879bb8();
  iVar1 = *(int *)(DAT_00978368 + 0x2cac);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    aiStack_3c[4] = 0x16e;
    aiStack_3c[3] = unaff_EBP + -0x10;
    aiStack_3c[2] = 0x4ea9ed;
    aiStack_3c[3] = FUN_00679d22();
    aiStack_3c[4] = 0xc;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    aiStack_3c[2] = 0x4ea9f9;
    FUN_00471102();
    aiStack_3c[4] = *(int *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else {
    aiStack_3c[3] = unaff_EBP + 8;
    *(int **)(unaff_EBP + -0x18) = aiStack_3c + 4;
    aiStack_3c[4] = 0;
    aiStack_3c[2] = 0x4eaa17;
    FUN_00414f8b();
    aiStack_3c[3] = 0x4eaa1e;
    iVar1 = FUN_0085692b();
    if (iVar1 == 0) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      aiStack_3c[4] = 0x174;
      aiStack_3c[3] = unaff_EBP + -0x18;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      aiStack_3c[2] = 0x4eaa3e;
      puVar2 = (undefined4 *)FUN_00679d22();
      aiStack_3c[4] = *(undefined4 *)(unaff_EBP + 8);
      aiStack_3c[3] = *puVar2;
      aiStack_3c[2] = unaff_EBP + -0x10;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      aiStack_3c[1] = 0x4eaa51;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        aiStack_3c[4] = *(int *)(unaff_EBP + -0x18) + -0xc;
        aiStack_3c[3] = 0x4eaa68;
        FUN_00434e38();
      }
      aiStack_3c[3] = unaff_EBP + -0x10;
      aiStack_3c[4] = 0xc;
      aiStack_3c[2] = 0x4eaa74;
      FUN_00471102();
      aiStack_3c[4] = *(int *)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0;
    }
    else {
      aiStack_3c[4] = *(undefined4 *)(DAT_00978358 + 0xd78);
      aiStack_3c[3] = 0x4eaa93;
      iVar3 = FUN_004ea83d();
      if (iVar3 == 2) {
        aiStack_3c[3] = 0x4eaaa0;
        aiStack_3c[4] = iVar1;
        iVar3 = FUN_004ea83d();
        if (iVar3 == 2) {
          *(undefined4 *)(unaff_EBP + -0x10) = 0;
          aiStack_3c[4] = 0x175;
          aiStack_3c[3] = unaff_EBP + -0x18;
          *(undefined1 *)(unaff_EBP + -4) = 4;
          aiStack_3c[2] = 0x4eaabf;
          puVar2 = (undefined4 *)FUN_00679d22();
          aiStack_3c[4] = *puVar2;
          aiStack_3c[3] = unaff_EBP + -0x10;
          *(undefined1 *)(unaff_EBP + -4) = 5;
          aiStack_3c[2] = 0x4eaace;
          FUN_00434e21();
          *(undefined1 *)(unaff_EBP + -4) = 4;
          if (*(int *)(unaff_EBP + -0x18) != 0) {
            aiStack_3c[4] = *(int *)(unaff_EBP + -0x18) + -0xc;
            aiStack_3c[3] = 0x4eaae4;
            FUN_00434e38();
          }
          aiStack_3c[3] = unaff_EBP + -0x10;
          aiStack_3c[4] = 0xc;
          aiStack_3c[2] = 0x4eaaf0;
          FUN_00471102();
          aiStack_3c[4] = *(int *)(unaff_EBP + -0x10);
          *(undefined1 *)(unaff_EBP + -4) = 0;
          goto LAB_004eab5a;
        }
      }
      aiStack_3c[3] = 0x4eab02;
      aiStack_3c[4] = iVar1;
      iVar3 = FUN_004ea83d();
      if (iVar3 != 1) {
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        aiStack_3c[4] = 0x166;
        aiStack_3c[3] = unaff_EBP + -0x18;
        *(undefined1 *)(unaff_EBP + -4) = 8;
        aiStack_3c[2] = 0x4eaba0;
        puVar2 = (undefined4 *)FUN_00679d22();
        aiStack_3c[4] = *(undefined4 *)(unaff_EBP + 8);
        aiStack_3c[3] = *puVar2;
        aiStack_3c[2] = unaff_EBP + -0x14;
        *(undefined1 *)(unaff_EBP + -4) = 9;
        aiStack_3c[1] = 0x4eabb3;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 8;
        aiStack_3c[0] = extraout_ECX;
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          aiStack_3c[4] = *(int *)(unaff_EBP + -0x18) + -0xc;
          aiStack_3c[3] = 0x4eabca;
          FUN_00434e38();
          aiStack_3c[0] = aiStack_3c[4];
        }
        aiStack_3c[4] = 0;
        aiStack_3c[3] = 0;
        aiStack_3c[2] = 0;
        aiStack_3c[1] = 0;
        *(int **)(unaff_EBP + -0x18) = aiStack_3c;
        FUN_00450368(unaff_EBP + -0x14);
        iVar3 = FUN_007db791();
        if (iVar3 == 6) {
          aiStack_3c[4] = 0;
          aiStack_3c[3] = 0;
          aiStack_3c[2] = 0x72;
          aiStack_3c[1] = 0x4eabf7;
          FUN_0060142b();
          aiStack_3c[4] = 8;
          *(undefined1 *)(unaff_EBP + -4) = 10;
          aiStack_3c[3] = 0x4eac05;
          FUN_00457cda();
          aiStack_3c[3] = 0x4eac0e;
          aiStack_3c[4] = iVar1;
          FUN_00457d37();
          aiStack_3c[3] = unaff_EBP + 8;
          *(int **)(unaff_EBP + -0x18) = aiStack_3c + 4;
          aiStack_3c[4] = 0;
          aiStack_3c[2] = 0x4eac1f;
          FUN_00414f8b();
          aiStack_3c[3] = 0x4eac27;
          FUN_00459cb5();
          aiStack_3c[4] = unaff_EBP + -0x28;
          aiStack_3c[3] = 0x4eac36;
          FUN_004751b2();
          *(undefined1 *)(unaff_EBP + -4) = 8;
          aiStack_3c[4] = 0x4eac42;
          FUN_0045ebca();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        aiStack_3c[4] = 0x4eac4d;
        FUN_00414ebb();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        aiStack_3c[4] = 0x4eac59;
        FUN_00414ebb();
        goto LAB_004eac59;
      }
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      aiStack_3c[4] = 0x176;
      aiStack_3c[3] = unaff_EBP + -0x18;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      aiStack_3c[2] = 0x4eab21;
      puVar2 = (undefined4 *)FUN_00679d22();
      aiStack_3c[4] = *puVar2;
      aiStack_3c[3] = unaff_EBP + -0x10;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      aiStack_3c[2] = 0x4eab30;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        aiStack_3c[4] = *(int *)(unaff_EBP + -0x18) + -0xc;
        aiStack_3c[3] = 0x4eab46;
        FUN_00434e38();
      }
      aiStack_3c[3] = unaff_EBP + -0x10;
      aiStack_3c[4] = 0xc;
      aiStack_3c[2] = 0x4eab52;
      FUN_00471102();
      aiStack_3c[4] = *(int *)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0;
    }
  }
LAB_004eab5a:
  if (aiStack_3c[4] != 0) {
    aiStack_3c[4] = aiStack_3c[4] + -0xc;
    aiStack_3c[3] = 0x4eab67;
    FUN_00434e38();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 8) != 0) {
    aiStack_3c[4] = *(int *)(unaff_EBP + 8) + -0xc;
    aiStack_3c[3] = 0x4eab80;
    FUN_00434e38();
  }
LAB_004eac59:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


