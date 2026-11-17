/* ptr_006850ac - 0x006850ac in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall ptr_006850ac(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  
  FUN_0074d6fb();
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar2 = (*(int **)(unaff_EBP + 0xc))[1];
    if ((0x16 < iVar2) && (iVar2 < 0x37)) {
      iVar1 = *(int *)(param_1 + 0xc) * 0x20;
      iVar2 = **(int **)(unaff_EBP + 0xc) + -0x31d + iVar1;
      if ((-1 < iVar2) && (iVar2 < iVar1)) {
        iStack_10 = 0x68510c;
        iVar2 = FUN_00686af2();
        iVar2 = *(int *)(iVar2 + 4);
        *(int *)(unaff_EBP + -0x10) = iVar2;
        if (iVar2 != 0) {
          iStack_10 = 0x685120;
          InterlockedIncrement((LONG *)(iVar2 + 4));
        }
        iStack_10 = *(int *)(unaff_EBP + -0x10);
        iVar2 = *(int *)(iStack_10 + 0x1c);
        *(undefined4 *)(unaff_EBP + -4) = 0;
        if (iVar2 == 1) {
          *(int **)(unaff_EBP + 8) = &iStack_14;
          uStack_18 = 0;
          uStack_1c = 0x6851ae;
          iStack_14 = iStack_10;
          FUN_0068684c();
          uStack_18 = 0;
          uStack_1c = 0;
          uStack_20 = 0;
          uStack_24 = 0;
          iStack_28 = 0;
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
          iStack_10 = *(undefined4 *)(iStack_10 + 0x20);
          iStack_14 = 0x68518f;
          iStack_10 = FUN_0064d61f();
          iStack_14 = *(int *)(unaff_EBP + 0x14);
          uStack_18 = *(undefined4 *)(unaff_EBP + 0x10);
          uStack_1c = 0x68519d;
          FUN_00755feb();
        }
        else if (iVar2 == 3) {
          iStack_10 = 1;
          iStack_14 = 0;
          uStack_18 = 0;
          uStack_1c = 0;
          uStack_20 = 0;
          uStack_24 = 0x685145;
          iStack_28 = FUN_0068686b();
          iStack_28 = iStack_28 + 0x24;
          *(undefined4 **)(unaff_EBP + 8) = &uStack_24;
          uStack_24 = extraout_ECX;
          FUN_00450368();
          *(int **)(unaff_EBP + 0xc) = &iStack_28;
          *(undefined1 *)(unaff_EBP + -4) = 2;
          iStack_28 = extraout_ECX_00;
          FUN_00679d22(&iStack_28,0xd96);
          *(undefined1 *)(unaff_EBP + -4) = 0;
          FUN_0074da18(*(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14));
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x10) != 0) {
          iStack_10 = 0x6851e6;
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


