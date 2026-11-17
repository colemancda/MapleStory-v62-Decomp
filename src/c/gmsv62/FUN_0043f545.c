/* FUN_0043f545 - 0x0043f545 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0043f545(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar3 = *(int *)(extraout_ECX + 0x468);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar3 == 0) {
    FUN_004031b7(0,3);
    iVar3 = *(int *)(extraout_ECX + 0xcc0);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    puVar2 = (undefined4 *)FUN_00425067(unaff_EBP + -0x18,unaff_EBP + -0x28);
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
               (IBinding *)*puVar2);
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x28);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      iVar3 = FUN_0040eed0();
      if (0 < iVar3) {
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          FUN_00878dfb(0x80004003);
        }
        uVar4 = FUN_0040eed0();
        *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
      }
    }
  }
  FUN_004031b7(0,3);
  iVar3 = *(int *)(extraout_ECX + 0xcc4);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  puVar2 = (undefined4 *)FUN_00425067(unaff_EBP + -0x18,unaff_EBP + -0x28);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
             (IBinding *)*puVar2);
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x28);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    iVar3 = FUN_0040eed0();
    if (*(int *)(unaff_EBP + -0x14) < iVar3) {
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      uVar4 = FUN_0040eed0();
      *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
    }
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x14);
}


