/* FUN_5080e67e - 0x5080e67e in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 FUN_5080e67e(void)

{
  int *piVar1;
  undefined4 uVar2;
  int *unaff_EBX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
  if (piVar1 != unaff_EBX) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  uVar2 = *(undefined4 *)(unaff_EBP + 8);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar2;
}


