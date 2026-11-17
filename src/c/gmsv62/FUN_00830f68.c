/* FUN_00830f68 - 0x00830f68 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00830f68(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_0083de8c();
  FUN_0083dcc1();
  FUN_0083dcf4();
  FUN_0083dd27();
  FUN_0083dd5a();
  FUN_0083dd8d();
  FUN_0083ddc0();
  FUN_0083ddf3();
  FUN_0083de26();
  FUN_0083de59();
  FUN_0045e3a0(0);
  FUN_0045e3a0(0);
  FUN_0045e3a0(0);
  FUN_0045e3a0(0);
  *(undefined4 *)(extraout_ECX + 0x3114) = 0;
  if (DAT_00978360 != 0) {
    FUN_0073e73c(0);
  }
  if (DAT_00979178 != 0) {
    FUN_00815de9();
    if (DAT_00979178 != 0) {
      (*(code *)**(undefined4 **)(DAT_00979178 + 8))(1);
    }
  }
  if (DAT_00979174 != 0) {
    FUN_00815de9();
    if (DAT_00979174 != 0) {
      (*(code *)**(undefined4 **)(DAT_00979174 + 8))(1);
    }
  }
  if (DAT_00979268 == 0) {
    iVar1 = FUN_004029b9(0x6b4);
    *(int *)(unaff_EBP + -0x10) = iVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar1 != 0) {
      FUN_006d82b6(extraout_ECX);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  FUN_0083d937();
  if (*(int *)(DAT_00978360 + 0xc68) == 2) {
    FUN_0073da1a(1);
  }
  FUN_0083d9c1();
  if (DAT_0097bdc4 == 0) {
    FUN_00705bdc();
  }
  else if (*(int *)(DAT_0097bdc4 + 0x5fc) != 0) {
    FUN_00815de9();
    FUN_00705381();
  }
  FUN_0064159b();
  iVar1 = (*DAT_0097b704)();
  *(undefined4 *)(extraout_ECX + 0x208c) = 0;
  uVar2 = FUN_007d1e08();
  *(undefined4 *)(extraout_ECX + 0x2090) = uVar2;
  *(int *)(extraout_ECX + 0x3118) = iVar1 + -300000;
  *(int *)(extraout_ECX + 0x3154) = iVar1 + -300000;
  iVar1 = FUN_0059d9bc();
  if (iVar1 == 0) {
    *(undefined4 *)(extraout_ECX + 13000) = 0;
  }
  else {
    *(undefined4 *)(extraout_ECX + 13000) = 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined4 *)(extraout_ECX + 0x32cc) = 0;
  return;
}


