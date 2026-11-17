/* FUN_00598faf - 0x00598faf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00598faf(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  int iVar2;
  
  FUN_00879bb8();
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 < 6) {
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(unaff_EBP + 0xc) + -4);
    }
    if (iVar1 < 0xd) {
      FUN_00598dac(iVar2 + 1);
      iVar2 = iVar2 * 0x1d;
      iVar1 = lstrcmpA((LPCSTR)(iVar2 + 0xc + *(int *)(extraout_ECX + 0x2c)),
                       *(LPCSTR *)(unaff_EBP + 0xc));
      if ((iVar1 != 0) ||
         (*(uint *)(iVar2 + 0x19 + *(int *)(extraout_ECX + 0x2c)) !=
          (uint)(*(int *)(unaff_EBP + 0x10) == 0))) {
        lstrcpyA((LPSTR)(iVar2 + 0xc + *(int *)(extraout_ECX + 0x2c)),*(LPCSTR *)(unaff_EBP + 0xc));
        *(uint *)(iVar2 + 0x19 + *(int *)(extraout_ECX + 0x2c)) =
             (uint)(*(int *)(unaff_EBP + 0x10) == 0);
        FUN_00598c09();
      }
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


