/* FUN_005006e1 - 0x005006e1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005006e1(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FUN_00879bb8();
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  uVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  (*DAT_0097b504)();
  uStack_2c = 0xff;
  uStack_30 = 0xc0015f90;
  *(undefined1 **)(unaff_EBP + 8) = auStack_34;
  uStack_38 = 0;
  uStack_3c = 0x500730;
  FUN_00424e0a();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 **)(unaff_EBP + -0x10) = auStack_40;
  uStack_3c = uVar1;
  uStack_38 = uVar2;
  FUN_00424dd7(0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puVar3 = (undefined4 *)FUN_0042e3f0(unaff_EBP + 0xc,*(undefined4 *)(unaff_EBP + 0x10),0);
  uStack_2c = 0x500762;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x20),
             (IBinding *)*puVar3);
  if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
    uStack_2c = 0x50076f;
    (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


