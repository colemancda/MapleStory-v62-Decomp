/* ptr_0069e8f4 - 0x0069e8f4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0069e8f4(void)

{
  int *piVar1;
  undefined4 *in_EAX;
  int iVar2;
  int iVar3;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  
  while( true ) {
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(unaff_EBX,(IBinding *)*in_EAX);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x60);
    if (iVar2 < unaff_EDI) {
      FUN_00878dfb(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x80);
    if (iVar2 < unaff_EDI) {
      FUN_00878dfb(iVar2);
    }
    if (*(int *)unaff_EBX == unaff_EDI) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = *(int **)unaff_EBX;
    iVar2 = (**(code **)(*piVar1 + 0xe0))(piVar1,0xffffffff);
    if (iVar2 < unaff_EDI) {
      FUN_00878e09(iVar2,piVar1,&DAT_00963df8);
    }
    FUN_0040ee87(*(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 0x18),1);
    iVar2 = *(int *)unaff_EBX;
    *(undefined4 *)(unaff_EBP + -4) = 0xd;
    if (iVar2 == unaff_EDI) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = *(int **)unaff_EBX;
    iVar2 = *piVar1;
    *(int **)(unaff_EBP + -0x10) = piVar1;
    iVar2 = (**(code **)(iVar2 + 0xfc))
                      (piVar1,*(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963df8);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    FUN_0040ee87(*(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 0x18),1);
    iVar2 = *(int *)unaff_EBX;
    *(undefined4 *)(unaff_EBP + -4) = 0xe;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_00429607(unaff_EBP + -0x40);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x40);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    FUN_00424aee(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 0xf;
    FUN_00424aee(&DAT_00980690);
    iVar2 = unaff_EBP + -0xa0;
    iVar6 = unaff_EBP + -0x90;
    uVar5 = 0x66;
    iVar3 = (-(uint)(*(int *)(unaff_EBP + -0x14) != 0) & 0x68) + 0x3a;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_00424e27(iVar3,0x66,iVar6,iVar2);
    FUN_00424f2f(iVar3,uVar5,iVar6,iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x90);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = FUN_00402bc3(unaff_EBP + -0xa0);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    unaff_EBX = unaff_EBX + 4;
    if (1 < *(int *)(unaff_EBP + -0x14)) break;
    unaff_EDI = 0;
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 0xb;
    FUN_00403191(&DAT_00980690);
    bVar4 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (bVar4) {
      FUN_00878dfb(0x80004003);
    }
    in_EAX = (undefined4 *)
             FUN_0042a39f(unaff_EBP + -0x1c,0,0,0x5a,0x2c,1,unaff_EBP + -0x60,unaff_EBP + -0x80);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


