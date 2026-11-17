/* FUN_0068509f - 0x0068509f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0068509f(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_ECX_01;
  int unaff_EBP;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  
  FUN_00879bb8();
  FUN_0074d6fb();
  if (*(int *)(extraout_ECX + 0xc) != 0) {
    iVar2 = (*(int **)(unaff_EBP + 0xc))[1];
    if ((0x16 < iVar2) && (iVar2 < 0x37)) {
      iVar1 = *(int *)(extraout_ECX + 0xc) * 0x20;
      iVar2 = **(int **)(unaff_EBP + 0xc) + -0x31d + iVar1;
      if ((-1 < iVar2) && (iVar2 < iVar1)) {
        iStack_1c = 0x68510c;
        iVar2 = FUN_00686af2();
        iVar2 = *(int *)(iVar2 + 4);
        *(int *)(unaff_EBP + -0x10) = iVar2;
        if (iVar2 != 0) {
          iStack_1c = 0x685120;
          InterlockedIncrement((LONG *)(iVar2 + 4));
        }
        iStack_1c = *(int *)(unaff_EBP + -0x10);
        iVar2 = *(int *)(iStack_1c + 0x1c);
        *(undefined4 *)(unaff_EBP + -4) = 0;
        if (iVar2 == 1) {
          *(int **)(unaff_EBP + 8) = &iStack_20;
          uStack_24 = 0;
          uStack_28 = 0x6851ae;
          iStack_20 = iStack_1c;
          FUN_0068684c();
          uStack_24 = 0;
          uStack_28 = 0;
          uStack_2c = 0;
          uStack_30 = 0;
          iStack_34 = 0;
          uVar8 = 0;
          uVar7 = 0;
          uVar6 = 0;
          uVar5 = 0;
          uVar4 = 0;
          uVar3 = 0;
          *(undefined1 *)(unaff_EBP + -4) = 0;
          iVar2 = FUN_0068686b(0,0,0,0,0,0);
          FUN_007529b7(*(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                       *(undefined4 *)(iVar2 + 0x20),uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
        }
        else if (iVar2 == 2) {
          iStack_1c = *(undefined4 *)(iStack_1c + 0x20);
          iStack_20 = 0x68518f;
          iStack_1c = FUN_0064d61f();
          iStack_20 = *(int *)(unaff_EBP + 0x14);
          uStack_24 = *(undefined4 *)(unaff_EBP + 0x10);
          uStack_28 = 0x68519d;
          FUN_00755feb();
        }
        else if (iVar2 == 3) {
          iStack_1c = 1;
          iStack_20 = 0;
          uStack_24 = 0;
          uStack_28 = 0;
          uStack_2c = 0;
          uStack_30 = 0x685145;
          iStack_34 = FUN_0068686b();
          iStack_34 = iStack_34 + 0x24;
          *(undefined4 **)(unaff_EBP + 8) = &uStack_30;
          uStack_30 = extraout_ECX_00;
          FUN_00450368();
          *(int **)(unaff_EBP + 0xc) = &iStack_34;
          *(undefined1 *)(unaff_EBP + -4) = 2;
          iStack_34 = extraout_ECX_01;
          FUN_00679d22(&iStack_34,0xd96);
          *(undefined1 *)(unaff_EBP + -4) = 0;
          FUN_0074da18(*(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14));
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x10) != 0) {
          iStack_1c = 0x6851e6;
          FUN_006868f7();
        }
        uVar3 = 1;
        goto LAB_006851ed;
      }
    }
  }
  uVar3 = 0;
LAB_006851ed:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


