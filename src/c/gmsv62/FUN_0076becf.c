/* FUN_0076becf - 0x0076becf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0076becf(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = *(int *)(extraout_ECX + 0x3c);
  iVar1 = *(int *)(iVar2 + 0x818);
  if ((iVar1 != 0) && (iVar1 != *(int *)(DAT_00978368 + 0x2088))) {
    *(undefined4 *)(unaff_EBP + -100) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar2 = FUN_0076c53a(*(undefined4 *)(iVar2 + 0x818),unaff_EBP + -0x68);
    if ((*(int *)(unaff_EBP + -0x68) != 0) && ((iVar2 == 0 || (iVar2 == 1)))) {
      iVar2 = FUN_00429303();
      if (iVar2 != 0) {
        FUN_004e9ed9(unaff_EBP + -100);
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


