/* FUN_004becbc - 0x004becbc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_004becbc(int param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x208c) == 0) &&
     (((param_3 != 0 ||
       (sVar1 = FUN_0045f084(*(int *)(param_1 + 0x2098) + 0x61,
                             *(undefined4 *)(*(int *)(param_1 + 0x2098) + 0x65)), 0 < sVar1)) &&
      (iVar2 = FUN_007d1e08(), param_2 <= iVar2 - *(int *)(param_1 + 0x2090))))) {
    return 1;
  }
  return 0;
}


