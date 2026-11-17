/* ptr_0049b3e8 - 0x0049b3e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0049b3e8(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_EAX;
  undefined4 uVar3;
  uint uVar4;
  int extraout_ECX;
  uint uVar5;
  int unaff_EBP;
  int unaff_ESI;
  int iVar6;
  int iStack_c;
  int iStack_8;
  
  iStack_c = 0x49b3ef;
  iStack_8 = in_EAX;
  FUN_00878e09();
  uVar4 = *(uint *)(*(int *)(unaff_ESI + 0x50) + 0x40);
  if (uVar4 != 0) {
    do {
      uVar5 = *(uint *)(*(int *)(unaff_ESI + 0x50) + 0x40);
      iVar6 = 0;
      if (uVar5 == 0) {
LAB_0049b439:
        iVar6 = -1;
      }
      else {
        do {
          if (uVar5 == uVar4) break;
          iVar6 = iVar6 + 1;
          iVar1 = *(int *)((-(uint)(uVar5 != 0) & uVar5 - 0x10) + 4);
          uVar5 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
        } while (uVar5 != 0);
        if (uVar5 == 0) goto LAB_0049b439;
      }
      *(uint *)(unaff_EBP + -0x20) = uVar4;
      iVar1 = *(int *)((-(uint)(uVar4 != 0) & uVar4 - 0x10) + 4);
      iVar2 = *(int *)(unaff_ESI + 0x34);
      *(uint *)(unaff_EBP + -0x18) = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
      if (iVar2 == iVar6) {
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          FUN_00878dfb();
        }
        iStack_8 = *(int *)(unaff_ESI + 0x1c) + -2;
        iStack_c = iVar6 * 0x10 + 1;
        *(int **)(unaff_EBP + -0x1c) = *(int **)(unaff_EBP + -0x10);
        iStack_8 = (**(code **)(**(int **)(unaff_EBP + -0x10) + 0x8c))
                             (*(undefined4 *)(unaff_EBP + -0x10),1);
        if (iStack_8 < 0) {
          iStack_c = 0x49b4ab;
          FUN_00878e09();
        }
      }
      iStack_8 = 0x49b4c2;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_8 = 0x49b4f2;
      iStack_8 = FUN_00449749();
      iStack_c = 0x49b4fb;
      uVar3 = FUN_00449713();
      *(int **)(unaff_EBP + -0x20) = &iStack_c;
      iStack_c = extraout_ECX;
      FUN_00448a17(uVar3);
      iVar6 = (iVar6 * 0x10 - *(int *)(unaff_ESI + 0x4c)) + 1;
      uVar3 = 7;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_004115d9(7,iVar6);
      FUN_00448e3a(uVar3,iVar6);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
      }
      if (*(int *)(unaff_EBP + -0x18) == 0) break;
      uVar4 = *(uint *)(unaff_EBP + -0x18);
    } while( true );
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


