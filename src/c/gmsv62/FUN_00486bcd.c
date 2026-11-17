/* FUN_00486bcd - 0x00486bcd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00486bcd(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_38;
  int iStack_34;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  int iStack_28;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_00879bb8();
  uStack_1c = 0x486be7;
  FUN_004489f5();
  uStack_1c = 0xff;
  uStack_20 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 8) == 0) {
    iStack_28 = unaff_EBP + -0x10;
    *(undefined1 **)(unaff_EBP + -0x18) = auStack_24;
    uStack_2c = 0x486c7a;
    FUN_0041160e();
    iStack_28 = 0x12;
    uStack_2c = 0x6b;
    iStack_34 = unaff_EBP + -0x10;
    *(undefined1 **)(unaff_EBP + -0x14) = auStack_30;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uStack_38 = 0x486c91;
    FUN_0048bccf();
    iStack_34 = 0;
    *(undefined4 **)(unaff_EBP + -0x18) = &uStack_38;
    FUN_00424dbc(extraout_ECX + 0x3e4);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puVar3 = (undefined4 *)FUN_0042e5bf(unaff_EBP + 8);
    uStack_1c = 0x486cc0;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x3dc),
               (IBinding *)*puVar3);
    piVar2 = *(int **)(unaff_EBP + 8);
  }
  else {
    iStack_28 = unaff_EBP + -0x10;
    *(undefined1 **)(unaff_EBP + -0x14) = auStack_24;
    uStack_2c = 0x486c07;
    FUN_0041160e();
    iStack_28 = 0x78;
    uStack_2c = 0x82;
    iStack_34 = unaff_EBP + -0x10;
    *(undefined1 **)(unaff_EBP + -0x18) = auStack_30;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uStack_38 = 0x486c21;
    FUN_0048bccf();
    iStack_34 = 0;
    *(undefined4 **)(unaff_EBP + -0x18) = &uStack_38;
    FUN_00424dbc(extraout_ECX + 0x3e0);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    piVar2 = (int *)FUN_0042e5bf(unaff_EBP + 8);
    piVar2 = (int *)*piVar2;
    piVar1 = *(int **)(extraout_ECX + 0x3dc);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (piVar1 != piVar2) {
      *(int **)(extraout_ECX + 0x3dc) = piVar2;
      FUN_00424ed4();
      if (piVar1 != (int *)0x0) {
        uStack_1c = 0x486c66;
        (**(code **)(*piVar1 + 8))();
      }
    }
    piVar2 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  if (piVar2 != (int *)0x0) {
    uStack_1c = 0x486ccd;
    (**(code **)(*piVar2 + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    uStack_1c = 0x486cde;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


