/*
Bis_fnc originally made by Bohemia Interactive Studio
Remade by Storm to allow Number String without notations

*/
private ["_number","_mod","_digots","_digitsCount","_modBase","_numberText","_decimals"];

_number = [_this,0,0,[0, ""]] call bis_fnc_param;
_mod = [_this,1,3,[0]] call bis_fnc_param;

if (typeName _number == "STRING") then {
	_number = parseNumber _number;
	_decimals = _number % 1;
    _decimals = _decimals * 1000000;
    _number = floor _number;
};
	
_digits = _number call BIS_fnc_numberDigits;
_digitsCount = count _digits - 1;

_modBase = _digitsCount % _mod;
_numberText = "";
//_str;
{
	_numberText = _numberText + str _x;
	if ((_foreachindex - _modBase) % (_mod) == 0 && _foreachindex != _digitsCount) then {_numberText = _numberText + ",";};
} foreach _digits;
_numberText



/*
private ["_number","_mod","_digots","_digitsCount","_modBase","_numberText"];

_number = [_this,0,0,[0, ""]] call bis_fnc_param;
_mod = [_this,1,3,[0]] call bis_fnc_param;

if (typeName _number == "STRING") then {
	_number = parseNumber _number;
};

_digits = _number call BIS_fnc_numberDigits;
_digitsCount = count _digits - 1;

_modBase = _digitsCount % _mod;
_numberText = "";
{
	_numberText = _numberText + str _x;
	if ((_foreachindex - _modBase) % (_mod) == 0 && _foreachindex != _digitsCount) then {_numberText = _numberText + ",";};
} foreach _digits;
_numberText
*/