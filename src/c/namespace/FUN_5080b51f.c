/* FUN_5080b51f - 0x5080b51f in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 * FUN_5080b51f(void)

{
  undefined4 uVar1;
  undefined4 *_Dst;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_5080e090();
  *(undefined4 **)(unaff_EBP + -0x10) = _Dst;
  *_Dst = &PTR_LAB_508177bc;
  memset(_Dst,0,0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  _Dst[3] = &PTR_LAB_508189c8;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_5080b576(_Dst + 4);
  uVar1 = *(undefined4 *)(unaff_EBP + -0xc);
  *_Dst = &PTR_FUN_508189c4;
  _Dst[3] = &PTR_LAB_508189c0;
  *unaff_FS_OFFSET = uVar1;
  return _Dst;
}


