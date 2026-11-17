/* FUN_007eddac - 0x007eddac in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007eddac(void)

{
  undefined4 *_Dst;
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_24;
  
  FUN_00879bb8();
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(extraout_ECX + 0xd8) = 0xffffffff;
  *(undefined4 *)(extraout_ECX + 0xdc) = 0xffffffff;
  *(undefined4 *)(extraout_ECX + 0x694) = 0xffffffff;
  *(undefined4 *)(extraout_ECX + 0x74) = uVar1;
  *(undefined4 *)(extraout_ECX + 0x98) = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(extraout_ECX + 0x9c) = *(undefined4 *)(unaff_EBP + 0x14);
  uVar1 = *(undefined4 *)(unaff_EBP + 0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(extraout_ECX + 0x80) = 0;
  *(undefined4 *)(extraout_ECX + 0x84) = 0;
  *(undefined4 *)(extraout_ECX + 0x88) = 0;
  *(undefined4 *)(extraout_ECX + 0x8c) = 0;
  *(undefined4 *)(extraout_ECX + 0xec) = 0;
  *(undefined4 *)(extraout_ECX + 0x124) = 0;
  *(undefined4 *)(extraout_ECX + 0xa0) = uVar1;
  FUN_007eeae0();
  _Dst = (undefined4 *)FUN_004029b9();
  if (_Dst == (undefined4 *)0x0) {
    _Dst = (undefined4 *)0x0;
  }
  else {
    uVar1 = FUN_007e6dfe();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar1;
    uVar1 = FUN_007e6d32();
    *(undefined4 *)(unaff_EBP + 8) = uVar1;
    *_Dst = &PTR_LAB_008e84a0;
    uStack_24 = 0x7ede5c;
    _memset(_Dst,0,0xc);
    _Dst[4] = *(undefined4 *)(unaff_EBP + 8);
    uVar1 = *(undefined4 *)(unaff_EBP + 0xc);
    *_Dst = &PTR_FUN_008e8ea8;
    _Dst[3] = uVar1;
  }
  *(undefined4 **)(unaff_EBP + -0x10) = _Dst;
  if (_Dst != (undefined4 *)0x0) {
    InterlockedIncrement(_Dst + 1);
  }
  *(undefined4 **)(unaff_EBP + 0x14) = &uStack_24;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450368(unaff_EBP + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004503f5();
  iVar2 = FUN_007e3c88();
  *(int *)(extraout_ECX + 0x80) = iVar2;
  if (*(int *)(extraout_ECX + 0x74) == 4) {
    *(int *)(extraout_ECX + 0x80) = iVar2 + 0xc;
  }
  if (*(int *)(extraout_ECX + 0x74) == 7) {
    FUN_007ee56d();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_004504e6(0);
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


