/* FUN_0076bccf - 0x0076bccf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0076bccf(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_70;
  int iStack_6c;
  
  FUN_00879bb8();
  iVar2 = *(int *)(extraout_ECX + 0x3c);
  iVar1 = *(int *)(iVar2 + 0x818);
  if ((iVar1 != 0) && (iVar1 != *(int *)(DAT_00978368 + 0x2088))) {
    *(undefined4 *)(unaff_EBP + -0x68) = 0;
    iStack_6c = unaff_EBP + -0x6c;
    uStack_70 = *(undefined4 *)(iVar2 + 0x818);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar2 = FUN_0076c53a();
    if ((*(int *)(unaff_EBP + -0x6c) != 0) &&
       (((iVar2 == 0 || (iVar2 == 1)) && (DAT_00978360 != 0)))) {
      iStack_6c = 0;
      *(undefined4 **)(unaff_EBP + -0x10) = &uStack_70;
      FUN_00450368(unaff_EBP + -0x68);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00449784();
      FUN_00743a05();
      iStack_6c = 0;
      uStack_70 = 0x76bd51;
      FUN_0073e65e();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_6c = 0x76bd5d;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


