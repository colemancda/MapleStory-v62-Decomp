/* FUN_004c9002 - 0x004c9002 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004c9002(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ea2e0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x13),
             (IBinding *)0x0);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  extraout_ECX[0x15] = &PTR_FUN_008ea2e4;
  FUN_004cdc72();
  piVar1 = *(int **)(extraout_ECX + 0x13);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  extraout_ECX[0xd] = &PTR_FUN_008ea2e8;
  FUN_004cdbe3();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  extraout_ECX[8] = &PTR_FUN_008ea2ec;
  FUN_004cda0b();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  extraout_ECX[2] = &PTR_FUN_008ea2f0;
  FUN_004cd86a();
  DAT_009791d0 = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


