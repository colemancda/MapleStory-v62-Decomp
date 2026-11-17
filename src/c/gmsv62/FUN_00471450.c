/* FUN_00471450 - 0x00471450 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


BYTE * FUN_00471450(BYTE *param_1,int param_2)

{
  int iVar1;
  BOOL BVar2;
  BYTE *pBVar3;
  
  do {
    if ((*param_1 == '\0') || (param_1[1] == '\0')) {
      return (BYTE *)0x0;
    }
    if (*param_1 != '\0') {
      pBVar3 = param_1;
      do {
        iVar1 = FUN_004713c4(*pBVar3,pBVar3[param_2 - (int)param_1]);
        if (iVar1 == 0) break;
        pBVar3 = pBVar3 + 1;
        if (pBVar3[param_2 - (int)param_1] == '\0') {
          return param_1;
        }
      } while (*pBVar3 != '\0');
    }
    BVar2 = IsDBCSLeadByte(*param_1);
    param_1 = param_1 + (BVar2 != 0) + 1;
  } while( true );
}


