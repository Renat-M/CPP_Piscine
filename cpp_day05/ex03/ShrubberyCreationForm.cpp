/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:45:29 by meourea           #+#    #+#             */
/*   Updated: 2022/05/23 17:23:29 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : \
Form("ShrubberyCreationForm", 145, 137)
{
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs) : \
Form(rhs.getName(), rhs.getSignGrade(), rhs.getExecGrade())
{
	*this = rhs;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	if (this == &rhs)
		return (*this);
	_target = rhs._target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(const Bureaucrat &executer) const
{
	if (!getIsSigned())
		throw FormNotSignedException();
	if (getExecGrade() < executer.getGrade())
		throw GradeTooLowException();
	std::ofstream out(_target + "_shrubbery");
	
	if (out.is_open())
	{
		out <<  "                     ; ; ;\n"
				"                   ;        ;  ;     ;;    ;\n"
				"                ;                 ;         ;  ;\n"
				"                                ;\n"
				"                               ;                ;;\n"
				"               ;          ;            ;              ;\n"
				"               ;            ';,        ;               ;\n"
				"               ;              'b      *\n"
				"                ;              '$    ;;                ;;\n"
				"               ;    ;           $:   ;:               ;\n"
				"             ;;      ;  ;;      *;  @):        ;   ; ;\n"
				"                          ;     :@,@):   ,;**:'   ;\n"
				"              ;      ;,         :@@*: ;;**'      ;   ;\n"
				"                       ';o;    ;:(@';@*\"'  ;\n"
				"               ;  ;       'bq,;;:,@@*'   ,*      ;  ;\n"
				"                          ,p$q8,:@)'  ;p*'      ;\n"
				"                   ;     '  ; '@@Pp@@*'    ;  ;\n"
				"                    ;  ; ;;    Y7'.'     ;  ;\n"
				"                              :@):.\n" 
				"                             .:@:'.\n"
				"                           .::(@:.      -Sam Blumenstein-" << std::endl;
	}
	out.close();
}