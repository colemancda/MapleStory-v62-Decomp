/* FUN_00658606 - 0x00658606 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00658606(int param_1,char *param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = ((param_3 == 0) - 1U & 0xe0) + 0x61;
  if (*param_2 != '\0') {
    iVar3 = (int)*param_2 - (int)cVar2;
    iVar1 = iVar3 / 3;
    if (param_1 - ((-(uint)(param_3 != 0) & 10) + 0x3f2) == iVar1) {
      cVar2 = (char)((iVar3 + 1) % 3) + (char)iVar1 * '\x03' + cVar2;
      *param_2 = cVar2;
      if (cVar2 == '[') {
        *param_2 = 'Y';
      }
      if (*param_2 == '{') {
        *param_2 = 'y';
      }
      return 0;
    }
  }
  *param_2 = ((char)param_1 - (((param_3 == 0) - 1U & 10) - 0xe)) * '\x03' + cVar2;
  return 1;
}


