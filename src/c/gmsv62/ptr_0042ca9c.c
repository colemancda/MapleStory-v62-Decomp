/* ptr_0042ca9c - 0x0042ca9c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0042ca9c(void)

{
  undefined4 in_EAX;
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int *unaff_EBX;
  int unaff_EBP;
  IBinding *in_stack_00000018;
  
  FUN_00433bdf(in_EAX);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uVar1 = FUN_00411641(*(undefined4 *)(unaff_EBP + 0xc));
  puVar2 = (undefined4 *)FUN_0042e3f0(unaff_EBP + 0x20,uVar1);
  in_stack_00000018 = (IBinding *)*puVar2;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
             in_stack_00000018);
  in_stack_00000018 = *(IBinding **)(unaff_EBP + 0x20);
  if (in_stack_00000018 != (IBinding *)unaff_EBX) {
    (**(code **)(*(int *)in_stack_00000018 + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int **)(unaff_EBP + -0x10) == unaff_EBX) {
    in_stack_00000018 = (IBinding *)0x42cae6;
    FUN_00402676();
  }
  else {
    in_stack_00000018 = (IBinding *)0x42caf0;
    FUN_00402676();
    in_stack_00000018 = (IBinding *)(unaff_EBP + -0x38);
    VariantInit((VARIANTARG *)in_stack_00000018);
    in_stack_00000018 = (IBinding *)&DAT_00980690;
    in_stack_00000018 = (IBinding *)FUN_00402e32();
    if ((int)in_stack_00000018 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    in_stack_00000018 = (IBinding *)(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    VariantInit((VARIANTARG *)in_stack_00000018);
    in_stack_00000018 = (IBinding *)&DAT_00980690;
    in_stack_00000018 = (IBinding *)FUN_00402e32();
    if ((int)in_stack_00000018 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    piVar3 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (piVar3 == unaff_EBX) {
      in_stack_00000018 = (IBinding *)0x80004003;
      FUN_00878dfb();
      piVar3 = *(int **)(unaff_EBP + -0x10);
    }
    iVar4 = *piVar3;
    in_stack_00000018 = *(IBinding **)(unaff_EBP + -0x2c);
    *(int **)(unaff_EBP + 0x20) = piVar3;
    iVar4 = (**(code **)(iVar4 + 0x110))(piVar3);
    if (iVar4 < (int)unaff_EBX) {
      in_stack_00000018 = (IBinding *)&DAT_00963df8;
      FUN_00878e09();
    }
    in_stack_00000018 = (IBinding *)(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    in_stack_00000018 = (IBinding *)FUN_00402bc3();
    if ((int)in_stack_00000018 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    in_stack_00000018 = (IBinding *)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    in_stack_00000018 = (IBinding *)FUN_00402bc3();
    if ((int)in_stack_00000018 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    in_stack_00000018 = *(IBinding **)(unaff_EBP + -0x10);
    *(IBinding ***)(unaff_EBP + 0x20) = &stack0x00000018;
    if (*(int **)(unaff_EBP + -0x10) != unaff_EBX) {
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 4))();
    }
    FUN_00427af9();
  }
  in_stack_00000018 = *(IBinding **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (in_stack_00000018 != (IBinding *)unaff_EBX) {
    (**(code **)(*(int *)in_stack_00000018 + 8))();
  }
  in_stack_00000018 = *(IBinding **)(unaff_EBP + 0x10);
  *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
  if (in_stack_00000018 != (IBinding *)unaff_EBX) {
    (**(code **)(*(int *)in_stack_00000018 + 8))();
  }
  in_stack_00000018 = *(IBinding **)(unaff_EBP + 0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (in_stack_00000018 != (IBinding *)unaff_EBX) {
    (**(code **)(*(int *)in_stack_00000018 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


