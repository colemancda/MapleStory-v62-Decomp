/* FUN_0079316f - 0x0079316f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0079316f(void)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int unaff_EBP;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int *piStack_44;
  
  FUN_00879bb8();
  iVar6 = *(int *)(extraout_ECX + 0x524);
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  if (iVar6 == 0) {
    piVar4 = *(int **)(unaff_EBP + 8);
    piStack_44 = (int *)0x79319f;
    FUN_0040f150();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if ((*(int **)(unaff_EBP + -0x10) == (int *)0x0) ||
       (iVar6 = **(int **)(unaff_EBP + -0x10), iVar6 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(iVar6 + -4) >> 1;
    }
    if (uVar2 != 0) {
      *(undefined4 *)(unaff_EBP + 8) = 0;
      pcVar1 = (code *)*piVar4;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (pcVar1 == ptr_004f5c6a) {
        piStack_44 = (int *)(unaff_EBP + -0x18);
        iStack_48 = 0x793206;
        puVar3 = (undefined4 *)FUN_00679d86();
        iStack_48 = *puVar3;
        piStack_44 = (int *)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iStack_4c = 0x793218;
        FUN_00437222();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          piStack_44 = (int *)0x79322f;
          FUN_00403384();
        }
        piStack_44 = (int *)0x79323e;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 3;
        piStack_44 = (int *)0x79324b;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 4;
        piStack_44 = (int *)0x79325b;
        piVar4 = (int *)FUN_007933aa();
        iVar6 = *piVar4;
        *(undefined1 *)(unaff_EBP + -4) = 5;
        if (iVar6 == 0) {
          piStack_44 = (int *)0x793271;
          FUN_00878dfb();
        }
        piStack_44 = (int *)0x79327f;
        piVar4 = (int *)FUN_007933aa();
        iVar6 = *piVar4;
        *(undefined1 *)(unaff_EBP + -4) = 6;
        if (iVar6 == 0) {
          piStack_44 = (int *)0x793290;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + 8) == 0) {
          piStack_44 = (int *)0x79329e;
          FUN_00878dfb();
        }
        piVar4 = *(int **)(unaff_EBP + 8);
        uVar7 = FUN_00404abb();
        *(undefined4 *)(unaff_EBP + 0x10) = uVar7;
        uVar7 = FUN_00404a94();
        iStack_4c = *(int *)(unaff_EBP + -0x3c);
        iStack_48 = *(int *)(unaff_EBP + -0x38);
        piStack_44 = *(int **)(unaff_EBP + -0x34);
        iStack_50 = *(int *)(unaff_EBP + -0x20);
        iVar6 = (**(code **)(*piVar4 + 0x90))
                          (piVar4,uVar7,*(undefined4 *)(unaff_EBP + 0x10),
                           *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                           *(undefined4 *)(unaff_EBP + -0x24));
        if (iVar6 < 0) {
          iStack_4c = 0x7932e7;
          iStack_48 = iVar6;
          piStack_44 = piVar4;
          FUN_00878e09();
        }
        FUN_004125d9();
        FUN_004125d9();
        *(undefined1 *)(unaff_EBP + -4) = 3;
        piStack_44 = (int *)0x793304;
        iVar6 = FUN_00402bc3();
        if (iVar6 < 0) {
          piStack_44 = (int *)0x79330f;
          FUN_00878dfb();
        }
        iVar6 = unaff_EBP + -0x3c;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        piStack_44 = (int *)0x79331c;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          piStack_44 = (int *)0x793327;
          FUN_00878dfb();
          iVar6 = extraout_ECX_01;
        }
        iStack_50 = *(int *)(unaff_EBP + -0x14);
      }
      else {
        piStack_44 = (int *)0x7931dc;
        puVar3 = (undefined4 *)FUN_00486ada();
        piStack_44 = (int *)0x7931e6;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + 8),
                   (IBinding *)*puVar3);
        FUN_004125d9();
        iVar6 = extraout_ECX_00;
        iStack_50 = extraout_ECX;
      }
      piStack_44 = (int *)0x7fffffff;
      iStack_48 = *(undefined4 *)(unaff_EBP + 0xc);
      iStack_50 = iStack_50 + 0xd3c;
      *(int **)(unaff_EBP + 0x10) = &iStack_4c;
      iStack_4c = iVar6;
      FUN_0041160e();
      *(int **)(unaff_EBP + 0xc) = &iStack_50;
      FUN_00433bdf(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar6 = FUN_0043f900();
      uVar2 = (uint)(iVar6 == 0);
      uVar7 = FUN_004091f9(uVar2);
      FUN_00424e82(uVar7);
      FUN_0042d941(uVar7,uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
        piStack_44 = (int *)0x79338d;
        (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
      }
    }
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_004030b1();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


