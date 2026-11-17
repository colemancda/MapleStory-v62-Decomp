/* FUN_00718e1f - 0x00718e1f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00718e1f(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar2;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(extraout_ECX + 0x68) == 0) {
    FUN_006543b6();
    iVar1 = FUN_004538dc(*(undefined4 *)(extraout_ECX + 0x80),0,1);
    if (-1 < iVar1) {
      iVar1 = *(int *)(unaff_EBP + 8);
      goto LAB_00718e4e;
    }
  }
  else {
    iVar1 = *(int *)(unaff_EBP + 8);
    if (((*(int *)(extraout_ECX + 0x70) <= iVar1) && (iVar1 <= *(int *)(extraout_ECX + 0x74))) ||
       ((*(int *)(extraout_ECX + 0x78) <= iVar1 && (iVar1 <= *(int *)(extraout_ECX + 0x7c))))) {
LAB_00718e4e:
      iVar1 = FUN_005539ff(iVar1);
      if (iVar1 != 0) {
        uVar2 = 1;
        goto LAB_00718e88;
      }
    }
  }
  uVar2 = 0;
LAB_00718e88:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


