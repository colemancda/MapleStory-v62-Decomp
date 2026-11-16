/* FUN_5080e615 - 0x5080e615 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 FUN_5080e615(void)

{
  int *piVar1;
  void *this;
  undefined4 uVar2;
  int *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 *unaff_FS_OFFSET;
  
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(int **)(unaff_EBP + -0x18) = unaff_EBX;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  this = (void *)FUN_508100bc((void *)(unaff_EBP + -0x18));
  FUN_5080a780(this,*(int **)(unaff_EBP + 0x10),*(IBinding **)(unaff_EBP + -0x14),
               (uint)(*(int **)(unaff_ESI + 0x2c) == unaff_EBX));
  FUN_50810110(*(void **)(unaff_EBP + 8),(int *)(unaff_EBP + -0x18));
  piVar1 = *(int **)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -0x20) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar1 != unaff_EBX) {
    (**(code **)(*piVar1 + 8))(piVar1);
    uVar2 = FUN_5080e67e();
    return uVar2;
  }
  piVar1 = *(int **)(unaff_EBP + -0x14);
  *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
  if (piVar1 != unaff_EBX) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  uVar2 = *(undefined4 *)(unaff_EBP + 8);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar2;
}


