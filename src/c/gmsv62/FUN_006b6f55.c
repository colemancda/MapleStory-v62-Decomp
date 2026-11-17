/* FUN_006b6f55 - 0x006b6f55 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006b6f55(void)

{
  int iVar1;
  undefined4 *_Dst;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_28;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x90) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(extraout_ECX + 0x84) = 0;
  _Dst = (undefined4 *)FUN_004029b9();
  if (_Dst == (undefined4 *)0x0) {
    _Dst = (undefined4 *)0x0;
  }
  else {
    *_Dst = &PTR_LAB_008e84a0;
    uStack_28 = 0x6b6f9a;
    _memset(_Dst,0,0xc);
    *_Dst = &PTR_FUN_008e8ea8;
    _Dst[4] = 200;
    _Dst[3] = 0;
  }
  *(undefined4 **)(unaff_EBP + -0x14) = _Dst;
  if (_Dst != (undefined4 *)0x0) {
    InterlockedIncrement(_Dst + 1);
  }
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_28;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450368(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004503f5();
  uVar2 = FUN_007e3c88();
  iVar1 = *(int *)(unaff_EBP + -0x14);
  *(undefined4 *)(extraout_ECX + 0x84) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    FUN_004504e6(0);
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


