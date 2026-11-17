/* FUN_0082670e - 0x0082670e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0082670e(void)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int extraout_ECX;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (DAT_009796d4 != 0) {
    FUN_0065ce47(0,0);
  }
  if (DAT_00973cd4 != 0) {
    FUN_00829362();
  }
  if (DAT_00979110 != 0) {
    FUN_00829252();
  }
  if (DAT_00978354 != 0) {
    FUN_008292a5();
  }
  if (DAT_009784c4 != (undefined4 *)0x0) {
    if (DAT_009784c4[0x24] != 0) {
      *(undefined4 *)(extraout_ECX + 0x2c) = 0;
      puVar4 = (undefined4 *)FUN_008269f6(unaff_EBP + -0x10);
      uVar1 = *puVar4;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_007d299b(uVar1,0);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        FUN_00434e38(*(int *)(unaff_EBP + -0x10) + -0xc);
      }
    }
    FUN_00475195();
    if (DAT_009784c4 != (undefined4 *)0x0) {
      (**(code **)*DAT_009784c4)(1);
    }
  }
  FUN_005d90e2();
  FUN_005f3a67();
  FUN_0061aa24();
  FUN_00638476();
  FUN_004d6986();
  if (DAT_009784c0 != 0) {
    FUN_00526567();
    iVar2 = DAT_009784c0;
    if (DAT_009784c0 != 0) {
      FUN_0082696f();
      FUN_00402b41(iVar2);
    }
  }
  if (DAT_00978130 != (undefined4 *)0x0) {
    FUN_00828c7d();
    if (DAT_00978130 != (undefined4 *)0x0) {
      (**(code **)*DAT_00978130)(1);
    }
  }
  (*DAT_0097b3ec)(300);
  FUN_007d6beb();
  FUN_00829160();
  FUN_00828e92();
  FUN_008290e3();
  FUN_008291b6();
  FUN_00828d64();
  FUN_00828eab();
  FUN_0082933e();
  if (DAT_00978364 != 0) {
    FUN_00817ef6();
  }
  cVar3 = FUN_00829762(0);
  if (cVar3 == '\0') {
    if (DAT_0097c1ac == (int *)0x0) {
      FUN_00878dfb(0x80004003);
    }
    (**(code **)(*DAT_0097c1ac + 0x10))(DAT_0097c1ac);
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)&DAT_0097c1ac,(IBinding *)0x0);
  }
  (*DAT_0097b3ec)(300);
  FUN_00826a71();
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)&DAT_0097c1a8,(IBinding *)0x0);
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)&DAT_0097c164;
  do {
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)0x0);
    this = this + 4;
  } while ((int)this < 0x97c1a0);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)&DAT_0097c1a0,(IBinding *)0x0);
  if (*(int *)(extraout_ECX + 4) != 0) {
    (*DAT_0097b534)(*(int *)(extraout_ECX + 4),0);
    (*DAT_0097b518)(*(undefined4 *)(extraout_ECX + 4));
    puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x48f);
    uVar1 = *puVar4;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    uVar5 = (*DAT_0097b380)(0);
    (*DAT_0097b5e8)(uVar1,uVar5);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    *(undefined4 *)(extraout_ECX + 4) = 0;
  }
  if (*(int *)(extraout_ECX + 8) != 0) {
    FUN_00672c45();
    *(undefined4 *)(extraout_ECX + 8) = 0;
  }
  if ((*(int *)(extraout_ECX + 0x2c) == 0) && (DAT_00973abc != 0)) {
    FUN_0041ea74();
  }
  if (DAT_00978134 != (undefined4 *)0x0) {
    (**(code **)*DAT_00978134)(1);
  }
  FUN_0043cf43();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


