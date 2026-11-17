/* ptr_006e6169 - 0x006e6169 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_006e6169(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int iVar4;
  int unaff_EDI;
  
  while( true ) {
    iVar3 = (in_EAX / unaff_EBP) * 0x2d;
    (*DAT_0097b504)(unaff_EDI,param_2 * 0x21 + 8,iVar3 + 0x1f,param_2 * 0x21 + 0x23,iVar3 + 0x45);
    in_EAX = unaff_ESI + 1;
    unaff_EDI = unaff_EDI + 0x10;
    if (0x18 < in_EAX) break;
    param_2 = in_EAX % 5;
    unaff_EBP = 5;
    unaff_ESI = in_EAX;
  }
  iVar4 = 0;
  iVar3 = unaff_EBX + 0xc58;
  do {
    iVar1 = (iVar4 % 4) * 0x24;
    iVar2 = (iVar4 / 4) * 0x24;
    (*DAT_0097b504)(iVar3,iVar1 + 0x26,iVar2 + 0x3c,iVar1 + 0x46,iVar2 + 0x5c);
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x10;
  } while (iVar4 < 0x14);
  return;
}


