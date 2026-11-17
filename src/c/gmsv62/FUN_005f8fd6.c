/* FUN_005f8fd6 - 0x005f8fd6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005f8fd6(void)

{
  char cVar1;
  int iVar2;
  int *extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int unaff_EBP;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar2 = extraout_ECX[0x30];
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 8) != iVar2) {
    iStack_1c = unaff_EBP + 8;
    iStack_20 = 0x5f9011;
    FUN_005b1a45();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_1c = 0x5f901e;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
    iStack_1c = unaff_EBP + -0x14;
    *(undefined1 **)(unaff_EBP + 8) = &stack0xffffffe8;
    iStack_20 = 0x5f903b;
    FUN_00414f8b();
    iStack_1c = 4;
    iStack_20 = unaff_EBP + -0x10;
    uStack_24 = 0x5f9048;
    FUN_005c179f();
    *(int **)(unaff_EBP + 8) = &iStack_1c;
    iStack_20 = 0xffffffff;
    uStack_24 = 0x5f905a;
    uStack_24 = FUN_00449713();
    uStack_28 = 0x5f9062;
    FUN_004dbb20();
    iStack_20 = 0x5f9069;
    FUN_005c152d();
    iStack_1c = 0x5f9078;
    (**(code **)(*(int *)(extraout_ECX[0x6b] + 4) + 0x24))();
    if (extraout_ECX[0x76] != 0) {
      iStack_1c = 0x5f908c;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x76),
                 (IBinding *)0x0);
    }
    if (extraout_ECX[0x79] != 0) {
      iStack_1c = 0x5f90a0;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x79),
                 (IBinding *)0x0);
    }
    extraout_ECX[0x2aa] = 0;
    iStack_1c = 0x5f90ae;
    FUN_008161f1();
    goto LAB_005f91d4;
  }
  cVar1 = FUN_0042452b();
  if ((cVar1 == '\0') || (cVar1 == '\x04')) {
    iStack_1c = unaff_EBP + 8;
    iStack_20 = 0x5f9197;
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_1c = 0x5f91a4;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
LAB_005f91ab:
    FUN_00414ebb();
  }
  else {
    if (cVar1 == '\x05') {
      iStack_1c = unaff_EBP + 8;
      iStack_20 = 0x5f90e7;
      FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_1c = 0x5f90f4;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      goto LAB_005f91ab;
    }
    if (cVar1 == '\x03') {
      iStack_1c = unaff_EBP + 8;
      iStack_20 = 0x5f9118;
      FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_1c = 0x5f9125;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      goto LAB_005f91ab;
    }
    if (cVar1 == '\x02') {
      *(undefined1 **)(unaff_EBP + 0xc) = &stack0xffffffe8;
      iStack_1c = 0x67;
      iStack_20 = unaff_EBP + -0x10;
      uStack_24 = 0x5f9148;
      FUN_005c179f();
      *(int **)(unaff_EBP + 0xc) = &iStack_1c;
      iStack_20 = 0xffffffff;
      uStack_24 = 0x5f9159;
      iStack_1c = extraout_ECX_00;
      uStack_24 = FUN_00449713();
      uStack_28 = 0x5f9161;
      FUN_004dbb20();
      iStack_20 = 0x5f9168;
      FUN_005c152d();
      extraout_ECX[0x2ac] = 3;
      iVar2 = FUN_007d1e08();
      extraout_ECX[0x2b3] = iVar2 + 10000;
      goto LAB_005f91d4;
    }
  }
  iStack_1c = 0x5f91b9;
  (**(code **)(*extraout_ECX + 0x34))();
  iStack_1c = 0;
  iStack_20 = 0;
  uStack_24 = 0;
  *(undefined4 **)(unaff_EBP + 0xc) = &uStack_28;
  uStack_28 = extraout_ECX_01;
  FUN_00450368(unaff_EBP + -0x10);
  FUN_007db3ad();
LAB_005f91d4:
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


