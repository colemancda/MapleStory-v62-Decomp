/* FUN_004bbe61 - 0x004bbe61 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_004bbe61(void)

{
  ushort uVar1;
  ushort uVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar1 = **(ushort **)(unaff_EBP + 0xc);
  uVar2 = **(ushort **)(unaff_EBP + 0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(ushort **)(unaff_EBP + 0xc) != (ushort *)0x0) {
    FUN_004b8ba3(0);
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0x14) != 0) {
    FUN_004b8ba3(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1 < uVar2;
}


