/* FUN_5080a4fb - 0x5080a4fb in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __cdecl FUN_5080a4fb(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 8) {
    uVar1 = (*DAT_5081e68c)(0,param_1 + -0xc);
    (*DAT_5081e688)(uVar1);
  }
  return;
}


