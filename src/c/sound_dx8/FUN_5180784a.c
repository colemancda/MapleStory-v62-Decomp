/* FUN_5180784a - 0x5180784a in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_5180784a(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int unaff_EBP;
  bool bVar6;
  
  FUN_5180ea30();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffbc;
  if (*(undefined4 **)(unaff_EBP + 0x2c) != (undefined4 *)0x0) {
    **(undefined4 **)(unaff_EBP + 0x2c) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_51803aa1();
  *(int *)(unaff_EBP + -0x20) = iVar2;
  if ((-2 < iVar2) && (iVar2 < 2)) {
    if ((*(short *)(unaff_EBP + 0x1c) == 0) || (*(short *)(unaff_EBP + 0x1c) == 10)) {
      bVar6 = (bool)(~(iVar2 != 0) & *(int *)(unaff_EBP + 0x2c) != 0);
    }
    else {
      Ordinal_8(unaff_EBP + -0x34);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_51804844((void *)(unaff_EBP + -0x34),0xb,(ushort *)(unaff_EBP + 0x1c));
      bVar6 = *(short *)(unaff_EBP + -0x2c) != 0;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar3 = FUN_518047f3((short *)(unaff_EBP + -0x34));
      if (iVar3 < 0) {
        FUN_5180e990(iVar3);
      }
    }
    if (bVar6) {
      if (*(int *)(unaff_EBP + 0x2c) == 0) {
        FUN_51807ac0();
        return;
      }
    }
    else if (iVar2 == 0) goto LAB_518078fc;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    iVar2 = FUN_51804b19();
    if (*(int *)(iVar2 + 0xc) == 0) {
      puVar4 = FUN_5180dde5();
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x14),
                 (IBinding *)*puVar4);
      piVar5 = *(int **)(unaff_EBP + -0x1c);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))(piVar5);
      }
      iVar2 = *(int *)(unaff_EBP + 8);
    }
    else {
      iVar2 = *(int *)(unaff_EBP + 8);
      if (*(int *)(iVar2 + 0x34) == 1) {
        puVar4 = FUN_518140c7();
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x14),
                   (IBinding *)*puVar4);
        piVar5 = *(int **)(unaff_EBP + -0x1c);
      }
      else {
        if (*(int *)(iVar2 + 0x34) != 2) {
          FUN_51802a89(u_Sound_DX8__Sound_is_not_initiali_5181f538,0);
          FUN_51802c9b((void *)(unaff_EBP + -0x44),0x80004005,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((void *)(unaff_EBP + -0x44),(ThrowInfo *)&DAT_5181a2e0);
        }
        puVar4 = FUN_5180b7ab();
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x14),
                   (IBinding *)*puVar4);
        piVar5 = *(int **)(unaff_EBP + 8);
      }
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))(piVar5);
      }
    }
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x14);
    *(int *)(unaff_EBP + 8) = iVar2;
    iVar3 = FUN_51808e2d((void *)(*(int *)(unaff_EBP + -0x14) + 0x28),(int *)(unaff_EBP + 8));
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      FUN_5180e990(iVar3);
    }
    puVar4 = (undefined4 *)(iVar2 + 0x24);
    *(undefined4 **)(unaff_EBP + 8) = puVar4;
    FUN_518017b5();
    iVar3 = *(int *)(iVar2 + 0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (iVar3 == 0) {
      FUN_51802a89(u_Sound_DX8__Sound_is_not_initiali_5181f538,0);
      piVar5 = (int *)(iVar2 + 0x28);
      *piVar5 = *piVar5 + -1;
      if (*piVar5 == 0) {
        *puVar4 = 0;
      }
      piVar5 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))(piVar5);
      }
      FUN_51807ac0();
      return;
    }
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 0x3c))();
    piVar5 = (int *)(iVar2 + 0x28);
    *piVar5 = *piVar5 + -1;
    iVar2 = *piVar5;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar2 == 0) {
      *puVar4 = 0;
    }
    if (!bVar6) {
      iVar2 = FUN_51810efb((void *)(*(int *)(unaff_EBP + -0x18) + 0x30),(int *)(unaff_EBP + -0x18));
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        FUN_5180e990(iVar2);
      }
    }
    iVar2 = *(int *)(unaff_EBP + -0x20);
    *(int *)(*(int *)(unaff_EBP + -0x18) + 0x2c) = iVar2;
    if (iVar2 != 0) {
      (**(code **)(**(int **)(unaff_EBP + -0x18) + 0x40))();
    }
    if (bVar6) {
      uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      **(undefined4 **)(unaff_EBP + 0x2c) = uVar1;
    }
    else if (*(undefined4 **)(unaff_EBP + 0x2c) != (undefined4 *)0x0) {
      **(undefined4 **)(unaff_EBP + 0x2c) = 0;
    }
    piVar5 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
    }
    FUN_51807ac0();
    return;
  }
LAB_518078fc:
  FUN_51807ac0();
  return;
}


